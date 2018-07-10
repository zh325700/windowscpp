/* C implementation QuickSort */
#include<stdio.h>
#include <iostream>
#include <vector>

using namespace std;

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (vector<int> &arr, int low, int high)
{
    int i = low;
    int pivot = arr[high];

    for(int j=low;j<high;j++){
      if(arr[j]<=pivot){
        swap(&arr[i],&arr[j]);
        i++;
      }
    }
    swap(&arr[i],&arr[high]);
    return i;
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(vector<int> &arr, int low, int high)
{
    if(low<high){
      int pivot_index = partition(arr, low , high);
      quickSort(arr,low,pivot_index-1);
      quickSort(arr,pivot_index+1,high);
    }


}


int main()
{
    vector<int> arr = {1,2,3,5,7,10,12,11};
    int n = arr.size();
    quickSort(arr, 0, n-1);
    printf("Sorted array: ");
    cout<<endl;
    for(auto n: arr){
      cout<<n<<' ';
    }
    return 0;
}
