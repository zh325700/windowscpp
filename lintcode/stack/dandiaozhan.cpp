#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>

using namespace std;

class Solution{
public:
  vector<int> firstLargerVector(vector<int> &nums){
    if(nums.size() == 0){
      return nums;
    }
    int size = nums.size();
    vector<int> result(size);
    stack<int> stk;
    int i =0;
    while(i<size){
      if(stk.empty() || nums[stk.top()] >= nums[i]){
          stk.push(i);
          i++;
      }else{
        result[stk.top()] = nums[i];
        stk.pop();
      }
    }
    while(!stk.empty()){
      result[stk.top()] = INT_MIN;
      stk.pop();
    }

    return result;


  }
};


int main(){

  Solution s;
  vector<int> inputv = {9,6,5,7,3,2,1,5,9,10};
  vector<int> result = s.firstLargerVector(inputv);
  for(int output : result){
    cout<<output<<'\t';
  }
  cout<<endl;
  return 0;
}
