#include <iostream>
#include <vector>
using namespace std;

int getFirstK(vector<int> &nums,int k,int start, int end){
  if(start > end){
    return -1;
  }
  int middleIndex = (start+end)/2;
  int middleData = nums[middleIndex];

  if(middleData == k){
    if((middleIndex>0 && nums[middleIndex-1] != k) || middleIndex ==0){
      return middleIndex;
    }
    else{
      end = middleIndex-1;
    }
  }
  else if(middleData >k){
    end = middleIndex-1;
  }else{
    start = middleIndex+1;
  }
  getFirstK(nums,k,start,end);
}



int getLastk(vector<int> &arr,int k, int start, int end){
  if(start > end){
    return -1;
  }
  int middleindex = (start + end)/2;
  int middlevalue = arr[middleindex];
  if(middlevalue == k){
    if((middleindex<end && arr[middleindex+1] != k )|| middleindex == end){
      return middleindex;
    }else{
      start = middleindex+1;
    }

  }
  else if(middlevalue > k){
    end = middleindex-1;
  }else{
    start = middleindex +1;
  }
  getLastk(arr, k,start,end);

}

int getNumsofNum(vector<int> nums, int length, int k){
  if( length >0){
    int firstindex = getFirstK(nums,k,0,nums.size());
    int lastindex = getLastk(nums,k,0,nums.size());
    if(firstindex >-1 && lastindex > -1){
      return lastindex - firstindex +1;
    }
  }
}

int main(){
  vector<int> nums = {1,2,2,2,4,5,6,8,8,8,8,8,11};
  int k =8;
  int lengthofnum = getNumsofNum(nums,nums.size(),k);
  cout<<"The length of: "<<k<<" is: "<<lengthofnum<<endl;
  return 0;
}
