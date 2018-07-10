#include <iostream>

using namespace std;

int fbnq(int n){
  if(n <= 0){
    return 0;
  }else if(n == 1){
    return 1;
  }else{
    return fbnq(n-1) + fbnq(n-2);
  }
}

int fbnqUsingloop(int n){
  if(n <=0){
    return 0;
  }else if(n ==1){
    return 1;
  }else{
    int first = 0;
    int second =1;
    int thisOne =0;
    for(int i =2;i<=n;i++){
      thisOne = first +second;
      first = thisOne;
      second = first;
    }
    return thisOne;
  }
}

int main(){
  int n;
  while(cin>>n)
  cout<<fbnq(n)<<endl;
  return 0;
}
