#include <iostream>
#include <vector>
using namespace std;

void showvector(const vector<int> &vec){
  vector<int>::const_iterator it;
  cout<<"The vector is : "<<endl;
  for(it = vec.begin(); it != vec.end(); it++){
    cout<<*it<<' ';
  }
  cout<<endl;
}

int main(){
  vector<int> a = {1,2,3};
  vector<int>::iterator i;
  i = a.begin();
  i++;
  showvector(a);
  a.erase(i);
  showvector(a);

  return 0;
}
