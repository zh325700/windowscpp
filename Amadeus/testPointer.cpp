#include <iostream>

using namespace std;

int main(){
  int value =100;
  int value2 = 200;
  int *a1 = &value;
  int *a2 = &value2;
  int *a[] = {a1,a2};
  cout<<**(a+1)<<endl;

  for(auto n :a){
    cout<<*n<<endl;
  }
}
