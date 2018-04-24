#include <iostream>

using namespace std;

int main(){
  int n[][3] = {1,2,3,4,5,6};
  int (*p)[3];
  p = n;
  // for(int i =0; i<6;i++){
  //   cout<<n[0][i]<<' ';
  // }
  // cout<<endl;
  // for(int i =0; i<6;i++){
  //   cout<<n[1][i]<<' ';
  // }
  cout<<p[0][0]<<','<<*(p[0]+1)<<','<<(*p)[5]<<endl;
  cout<<p[0]<<','<<p[0]+1<<endl;
  cout<<endl;
}
