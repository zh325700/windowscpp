#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  vector<int> inputs(10,0);
  for(int i =0;i<10;i++){
    cin>>inputs[i];
  }
  sort(inputs.begin(),inputs.end());
  int xsquare = inputs[0]*inputs[0];
  int xy = inputs[0]*inputs[9];
  int ysquare = inputs[9]*inputs[9];
  int z = inputs[1];
  if(abs(inputs[0])>inputs[9]){
    xsquare = inputs[9]*inputs[9];
    ysquare = inputs[0]*inputs[0];
  }
  int result = xsquare+xy-ysquare+z;
  cout<<result<<endl;
  return 0;
}
