#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int gcd(int i, int j){
  if(i<j){
    for(int k =i;k>0;k--){
      if(j % k == 0){
        return k;
      }
    }
  }else{
    for(int k =j;k>0;k--){
      if(i % k == 0){
        return k;
      }
    }
  }
}

int main(){
  int N,n,m,p;
  int answer=0;
  cin>>N>>n>>m>>p;
  int maxlength = max(n,m);
  int  input[N];
  input[0] = p;
  for(int i =1;i<maxlength;i++){
    input[i] = (input[i-1]+153)%p;
  }
  for(int i =1;i<=n;i++){
    for(int j=1;j<=m;j++){
      int tempindex = gcd(i,j);
      answer += input[tempindex-1];
    }
  }
  cout<<answer<<endl;
}
