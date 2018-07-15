#include <iostream>
#include <queue>

using namespace std;

int main(){
  priority_queue<int, vector<int>, greater<int>> my_pq;
  my_pq.push(10);
  my_pq.push(20);
  my_pq.push(15);
  my_pq.push(18);
  cout<<"pop: "<<my_pq.top()<<endl;
}
