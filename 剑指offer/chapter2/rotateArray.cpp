#include <iostream>
#include <vector>

using namespace std;

int findTheMinInRotateArray(vector<int> &arr){
  if(arr.empty()){
    return -1;
  }

  int size = arr.size();
  int index1 = 0;
  int index2 = size-1;
  int indexMiddle;
  if(arr[index1] < arr[index2]){
    return arr[index1];
  }

  while(index1<index2){
    indexMiddle = (index1+index2)>>1;
    if(index2- index1 ==1){
      break;
    }
    if(arr[indexMiddle] >= arr[index1]){
      index1 = indexMiddle;
    }else if(arr[indexMiddle] <= arr[index2]){
      index2 = indexMiddle;
    }

  }
  return arr[index2];
}


int main(){
  vector<int> arr = {3,4,5,1,2,3,3,3,3,3};
  cout<<findTheMinInRotateArray(arr)<<endl;
  return 0;
}
