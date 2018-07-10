#include <iostream>

using namespace std;

int countHowMantones(int n){
  int count =0;
  while(n){
    if(n & 1){
      count++;
    }
    n = n>>1;
  }
  return count;
}

int countWithMovingFlag(int n){
  int count =0;
  int flag =1;
  while(flag){
    if(n & flag){
      count ++;
    }
    flag = flag <<1;
  }
  return count;
}

int main(){
  int n=0;
  while(cin>>n){
    cout<< countWithMovingFlag(n)<<endl;
  }
  return 0;
}
