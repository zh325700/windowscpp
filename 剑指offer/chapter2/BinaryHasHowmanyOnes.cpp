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

int main(){
  int n=0;
  while(cin>>n){
    cout<< countHowMantones(n)<<endl;
  }
  return 0;
}
