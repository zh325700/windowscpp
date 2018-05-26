#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <limits.h>
using namespace std;

struct bian {
    int to, distance;
};

const int maxnode = 6000;
typedef pair<int, int> myPair;

int N, R;
vector<bian> Nodes[maxnode];
vector<int> distMin;
vector<int> distSecondMin;

void calculate() {
    priority_queue<myPair, vector<myPair>, greater<myPair> > myque; // keep a root minimum queue
    distMin = vector<int> (N,INT_MAX);
    distSecondMin = vector<int> (N,INT_MAX);
    distMin[0] = 0;
    myque.push(myPair(0,0));
    // applying BFS
    while(!myque.empty()) {
        myPair p = myque.top();
        myque.pop();
        int v = p.second, d = p.first;

        if(distSecondMin[v] < d){
          continue;
        }

        for(int i=0; i<Nodes[v].size(); ++i) {
            bian &aBian = Nodes[v][i];
            int d2 = d + aBian.distance;
            if(distMin[aBian.to] > d2) {
                swap(distMin[aBian.to], d2);
                myque.push(myPair(
                  distMin[aBian.to], aBian.to));
            }
            if( distMin[aBian.to] < d2 && distSecondMin[aBian.to] > d2 ) {
                distSecondMin[aBian.to] = d2;
                myque.push(myPair(
                  distSecondMin[aBian.to], aBian.to));
            }
        }
    }
    cout<<distSecondMin[N-1]<<endl;
}

int main() {
    bian aBian;
    int first, second, dist;

    while(cin>>N>>R) {

        for(int i=0; i<R; ++i) {
            cin>>first>>second>>dist;
            first--,second--;
            aBian.to = second;
            aBian.distance = dist;
            Nodes[first].push_back(aBian);
            aBian.to = first;
            Nodes[second].push_back(aBian);
        }
        calculate();
    }
    return 0;
}
