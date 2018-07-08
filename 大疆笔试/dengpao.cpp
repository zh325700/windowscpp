#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string ifPossible(const vector<vector<int>> &input,int n,int m){
  if(n<=0 || m<=0){
    return "NO";
  }
  if(n==1){
    auto  p = find(input[0].begin(), input[0].end(), 0);
    auto  q = find(input[0].begin(), input[0].end(), 1);
    if(p!=input[0].end() && q!=input[0].end()){
      return "NO";
    }else {
      return "YES";
    }
  }
  if(m==1){
    for(int i=0;i<n;i++){
      if(input[0][i] == 0){
        return "NO";
      }
    }
    return "YES";
  }
  int numberofZero=0;
  for(int i=0;i<n;i++){
    auto  p = find(input[i].begin(), input[i].end(), 0);
    if(p!=input[i].end()){
      numberofZero++;
    }
  }
  if(numberofZero>=2){
    return "NO";
  }

  return "YES";
}

int main(){
  int n=0,m=0;
  cin>>n>>m;
  vector<vector<int>> input(n, vector<int>(m));
  for(int i =0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>input[i][j];
    }
  }
  cout<<ifPossible(input,n,m)<<endl;
  return 0;
}
