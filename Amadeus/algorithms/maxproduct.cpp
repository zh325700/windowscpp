// C++ code to find maximum possible product of
// sub-sequence of size k from given array of n
// integers
#include <algorithm> // for sorting
#include <iostream>
using namespace std;

// Required function
int maxProductSubarrayOfSizeK(int A[], int n)
{
  if(n==0){
    return 0;
  }else if(n==1){
    return A[0];
  }else if(n==2){
    return A[0]*A[1];
  }
  sort(A,A+n-1);
  int i =0;
  int j =n-1;
  int product = 1;


  int leftProduct = A[i]*A[i+1];
  int rightProduct = A[j]*A[j-1];
  if(leftProduct < rightProduct){
    product *= rightProduct;
  }else{
    product *= leftProduct;
  }

  return product;

}

// Driver Code to test above function
int main()
{
    int A[] = { -10,-5,-3,0,3,8,9,10 };
    int n = sizeof(A) / sizeof(A[0]);
    cout << maxProductSubarrayOfSizeK(A, n)<<endl;

    return 0;
}
