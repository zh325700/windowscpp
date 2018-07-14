#include <iostream>
#include <vector>


using namespace std;
//adjust array's position to make odd come first before even

void reorderOddandEven(vector<int> &arr,bool (* func)(int)){
    int size = arr.size();
    if(size == 0){
      return;
    }
    int leftindex =0;
    int rightindex =size-1;
    while(leftindex < rightindex){
      if(func(arr[leftindex])){
        leftindex ++;
      }else{
        if(func(arr[rightindex])){
          swap(arr[leftindex], arr[rightindex]);
          leftindex ++;
          rightindex --;
        }else{
          rightindex --;
        }
      }
    }
}

bool isEven(int n){
  return n & 1;
}

bool isPositive(int n){
  return n > 0;
}

void printthevector(const vector<int> &arr){
  for(auto n: arr){
    cout<<n<<' ';
  }
}

int main(){
  vector<int> arr = {1,-3,-4,-5,2,13,-2,-6,19};
  reorderOddandEven(arr,isPositive);
  printthevector(arr);
  return 0;
}
