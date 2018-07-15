#include <iostream>
#include <deque>

using namespace std;

void showDeque(const deque<int> &my_que){
  deque<int>::const_iterator it;
  cout<<"The content of deque are: ";
  for(it = my_que.begin();it!=my_que.end();it++){
    cout<<*it<<' ';
  }
  cout<<endl;
}


int main(){
  deque<int> my_que = {1,2,3};
  my_que.pop_front();
  my_que[1] = 100;
  my_que.push_front(11);
  showDeque(my_que);
}
