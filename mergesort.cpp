#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &nums, int start, int end, int middleindex){
    int sizeleft = middleindex -start +1;
    int sizeright = end - middleindex;
    vector<int> left(sizeleft,0);
    vector<int> right(sizeright,0);
    // initializing the two arrays: l and r
    for(int i = 0; i<sizeleft; i++){
      left[i] = nums[start+i];
    }
    for(int j =0; j<sizeright; j++){
      right[j] = nums[middleindex +j+1];
    }
    //merge two arrays and paste teh value to nums
    int i =0;
    int j=0;
    int k=start;
    while(i<=sizeleft-1 && j<=sizeright-1){
        if(left[i] <= right[j]){
          nums[k] =left[i];
          i++;
          k++;
        }else{
          nums[k] = right[j];
          j++;
          k++;
        }
    }
      while(i<=sizeleft-1){
        nums[k] =left[i];
        i++;
        k++;
      }

      while(j<=sizeright-1){
        nums[k] =left[j];
        j++;
        k++;

    }
  }

void mergesort (vector<int> &nums, int start, int end){
  if(start == end){
    return;
  }
  if(start < end){
    int middleindex = (start+end)/2;
    mergesort(nums,start,middleindex);
    mergesort(nums,middleindex+1,end);

    merge(nums,start,end,middleindex);

  }
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(vector<int> A, int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<A[i]<<' ';
    cout<<endl;
}

/* Driver program to test above functions */
int main()
{
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int arr_size = arr.size();

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergesort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
