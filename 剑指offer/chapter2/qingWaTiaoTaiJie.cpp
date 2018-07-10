#include <iostream>
#include <vector>

using namespace std;

int qingWaTiao(int n){
  vector<int> f(n+1,0);
  f[0] = 0;
  f[1] = 1;
  f[2] = 1;
  for(int i =3;i<=n;i++){
    f[i] = f[i-1]+f[i-2];
  }
  return f[n];
}

int main(){
  int n;
  while(cin>>n){
    cout<<qingWaTiao(n)<<endl;

  }
  return 0;
}
