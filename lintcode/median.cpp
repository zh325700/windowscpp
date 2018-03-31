#include <iostream>
#include <vector>

using namespace std;


void swap (int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(vector<int> &arr, int low , int high){
    int pivot = arr[high];
    int i = low -1;    // index of smaller element
    for(int j = low; j<= high -1; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quicksort(vector<int> &arr, int low , int high){
    if(low <high){
        int pi = partition (arr , low ,high);
        quicksort(arr,low, pi-1);
        quicksort(arr, pi+1,high);
    }
}

int median1(vector<int> &nums) {
        // write your code here
        if( nums.size() ==0){
            return 0;
        }
        int size = nums.size();
        quicksort(nums,0,size-1);
        if(size ==1){
            return nums[0];
        }
        if(size%2 ==0){
            return nums[size/2];
        }else{
            return nums[size/2-1];
        }
    }

  int main(){
    vector<int> arr = {5,1,2,4,3};
    int median = median1(arr);
    for(int i : arr){
      cout<<i<<'\t';
    }
    cout<<median<<endl;
  }
