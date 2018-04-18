#include <iostream>
#include <vector>

using namespace std;

int main(){
  //state : f[i][j] = 走到这边的最大礼物数量， function : f[i][j] = max(f[i-1][j],f[i][j-1]) + A[i][j]

  //initialize
  vector<vector<int>> input;

  vector<int> a = {1,3,5};
  vector<int> b = {2,4,6};
  vector<int> c = {1,10,3};
  input.push_back(a);
  input.push_back(b);
  input.push_back(c);
  int size = input.size();
  vector<vector<int>> f(size,vector<int>(size,0));
  f[0][0] = input[0][0];

  for(int i=1; i<size; i++){
    f[i][0] = input[i][0] +f[i-1][0];
  }
  for(int j = 1; j<size; j++){
    f[0][j] = input[0][j] + f[0][j-1];
  }

  for(int i = 1; i<size; i++){
    for(int j = 1; j<size; j++){
      f[i][j] = max(f[i-1][j],f[i][j-1]) + input[i][j];
    }
  }
  cout<<f[size-1][size-1]<<endl;
  return 0;
}
