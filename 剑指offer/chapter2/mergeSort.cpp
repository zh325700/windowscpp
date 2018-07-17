#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int start, int end, int middleindex){
    int i,j;
    int n1 = middleindex - start +1;
    int n2 = end - middleindex;
    vector<int> arrLeft(n1,0);
    vector<int> arrRight(n2,0);
    for(i=0;i<n1;i++){
      arrLeft[i] = arr[start+i];
    }
    for(j=0;j<n2;j++){
      arrRight[j] = arr[middleindex+j+1];
    }
    i=0;j=0;
    int k = start;
    while(i < n1 && j<n2){
      if(arrLeft[i] < arrRight[j]){
        arr[k] = arrLeft[i];
        k++;i++;
      }else{
        arr[k] = arrRight[j];
        k++;j++;
      }
    }
    while(i < n1){
      arr[k] = arrLeft[i];
      k++;i++;
    }
    while(j < n2){
      arr[k] = arrRight[j];
      k++;
      j++;
    }
}

void mergesort(vector<int> &arr, int start, int end){
  if(start < end){
    int middleindex = (start + end)>>1;
    mergesort(arr, start, middleindex);
    mergesort(arr, middleindex +1,end);

    merge(arr,start,end,middleindex);
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
