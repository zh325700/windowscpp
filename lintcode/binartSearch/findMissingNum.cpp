#include <iostream>
#include <vector>
using namespace std;

int getmissingnum(vector<int> &nums, int start, int end){
  int middleindex = (start+end) /2;
  int middlevalue = nums[middleindex];
  if(middleindex == middlevalue){
    if(middleindex < end){
      if(middleindex + 1 < nums[middleindex + 1]){
        return middleindex +1;
      }
    }else{
      return middleindex;
    }
  }else{
    if(middleindex>0){
      if(middleindex -1 == nums[middleindex -1]){
        return middleindex;
      }else{
        end = middleindex-1;
      }
    }else{
      return 0;
    }
  }
return  getmissingnum(nums,start,end);

}

int getMissingNum(vector<int> &nums, int length){
  if(length <= 0){
    return -1;
  }
  int left = 0;
  int right = length-1;
  while(left <= right){
    int middleindex = (right + left) >>1;
    int middlevalue = nums[middleindex];
    if(middlevalue != middleindex){
      if(middleindex ==0 || middleindex-1 == nums[middleindex-1] ){
        return middleindex;
      }else{
        right = middleindex -1;
      }
    }else{
      left = middleindex +1;
    }
  }
    // if(right == left){
    //   return left;
    // }
  return -1;
}


int main(){
  vector<int> nums = {0,1,2,3,5,6,7,8,9,10};
  // int index = getmissingnum(nums,0,nums.size());
  // cout<<"the index of missing num is: "<<index <<endl;
  int index2 = getMissingNum(nums,nums.size());
  cout<<"the index of missing num is: "<<index2 <<endl;
  return 0;
}
