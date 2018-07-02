#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

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

  int array1[] = {1,2,3,4};
  auto iter = max_element(array1,array1+sizeof(array1)/sizeof(array1[0]));
  cout<<"The index of max value is: "<<distance(array1,iter)<<endl;
  cout<<"The max value is: "<<*iter<<endl;



}
