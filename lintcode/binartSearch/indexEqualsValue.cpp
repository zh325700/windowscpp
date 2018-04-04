#include <iostream>
#include <vector>

using namespace std;

int getIndexofSameValue(vector<int> &nums,int start,int end){
  if(start > end){
    return -1;
  }

  int middleIndex = (start+end)/2;
  int middleValue = nums[middleIndex];

  if(middleValue == middleIndex){
    return middleIndex;
  }else if(middleValue > middleIndex){
    end = middleIndex -1;
  }else{
    start = middleIndex +1;
  }
  return getIndexofSameValue(nums,start,end);
}

int main(){
  vector<int> nums = {-1,0,1,2,5,7,8};
  int index = getIndexofSameValue(nums,0,nums.size());
  cout<<"the index of the same value is: "<<index<<endl;
  return 0;
}
