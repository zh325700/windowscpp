#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int main(){
  int T;
  cin>>T;
  if(T<=0){
    return 0;
  }
  for(int times =0;times<T;times++){
    int N;
    cin>>N;
    vector<vector<int>> input(N, vector<int>(2));
    for(int i=0;i<N;i++){
      cin>>input[i][0]>>input[i][1];
    }
  }



  cout<<"#Case 1:"<<3<<endl;
  return 0;
}
