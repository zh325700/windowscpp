
#include <algorithm>
#include <iostream>

using namespace std;

int maxProductSubarrayOfSizeK(int A[], int n, int k)
{
  sort(A,A+n);
  int product =1;

  //case I, k is odd && rightMost is 0
  if(k&1 && A[n-1] ==0){
    return 0;
  }

  //case II, k is odd and rightMost is neg
  if(k&1 && A[n-1] <0){
    for(int i =n-1;i>=n-k;i--){
      product *= A[i];
    }
  }

  int i =0;
  int j =n-1;

  if(k & 1){
    product *= A[j];
    j--;
    k--;
  }

k = k>>1;

for(int iter=0;iter<k;iter++){
  int rightPair = A[j]*A[j-1];
  int leftPair = A[i]*A[i-1];

  if(rightPair > leftPair){
    product *= rightPair;
    i+=2;
  }else{
    product *= leftPair;
    j-=2;
  }
}

return product;

}
//case III, k is odd and rightMost is positive



// Driver Code to test above function
int main()
{
    int A[] = { 1, 2, -1, -3, -6, 4 };
    int n = sizeof(A) / sizeof(A[0]);
    int k = 2;
    cout << maxProductSubarrayOfSizeK(A, n, k);

    return 0;
}
