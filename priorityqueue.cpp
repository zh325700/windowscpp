// #include<iostream>
// #include<queue>
// using namespace std;
//
// int main(){
//     priority_queue<int,vector<int>,greater<int>> p;
//     p.push(1);
//     p.push(2);
//     p.push(8);
//     p.push(5);
//     p.push(43);
//     for(int i=0;i<5;i++){
//         cout<<p.top()<<endl;
//         p.pop();
//     }
//     return 0;
// }
#include<iostream>
#include<queue>
#include<cstdlib>
using namespace std;
struct Node{
    int x,y;
    Node(int a=0, int b=0):
        x(a), y(b) {}
};

struct cmp{
    bool operator()(Node a, Node b){
        if(a.x == b.x)  return a.y>b.y;
        return a.x>b.x;
    }
};

int main(){
    priority_queue<Node, vector<Node>, cmp>p;

    for(int i=0; i<10; ++i)
        p.push(Node(rand()%100, rand()%100));

    while(!p.empty()){
        cout<<p.top().x<<' '<<p.top().y<<endl;
        p.pop();
    }//while
    //getchar();
    return 0;
}
