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
// 比如 1100 -1 = 1011； 1100 & 1011 = 1000 相当于把最右边的那个1给去掉了，
//所以一个数支持几次这样的运算就代表有几个1
int countUingMagic(int n){
  int count = 0;
  while(n){
    n = (n-1) & n;
    count++;
  }
  return count;
}

int main(){
  int n=0;
  while(cin>>n){
    cout<< countUingMagic(n)<<endl;
  }
  return 0;
}
