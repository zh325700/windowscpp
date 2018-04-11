#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;


int calculateLongestINTString(vector<int> &input){
  int size = input.size();
  int output = 0;
  if(size == 0){
    return -1;
  }
  vector<int> f(size,INT_MIN);
  f[0] = input[0];
  for(int i =1; i<size; i++){
      int maxLength =0;
      maxLength = max(input[i],f[i-1]+input[i]);
      f[i] = maxLength;
  }
  for(int i =0;i<size;i++){
    if(f[i] > output){
      output = f[i];
    }
  }
  return output;
}


int main(){
  vector<int> input = {1,-2,3,4,5,-10,5,1,20};
  cout<<calculateLongestINTString(input)<<endl;
  return 0;
}
