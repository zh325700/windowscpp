#include<vector>
#include<unordered_map>
#include<iostream>
#include<list>

using namespace std;

int main() {
int n;
cin >> n;
vector<int> arr(n);
unordered_map<int,list<int>> map;
vector< list<int> > start(n,list<int>());
vector< list<int> > end(n,list<int>());

for(int i = 0; i < n; i++){cin >> arr[i];}
int p;
cin >> p;
vector< int > result(p,0);
vector<vector<int>> query(p,vector<int>(3));
for(int i = 0; i < p; i++)
{
cin >> query[i][0] >> query[i][1] >> query[i][2];
start[query[i][0]-1].push_back(i);
end[query[i][1]-1].push_back(i);
}
for(int i = 0; i < n ; i++){
for(int x : start[i]){
map[query[x][2]].push_back(x);
}
for(int x : map[arr[i]]){
result[x]++;
}
for(int x : end[i]){
map[query[x][2]].remove(x);
}
}

for(int i = 0; i < p; i++)
cout << result[i] << endl;
return 0;
}
