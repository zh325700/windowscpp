#include <iostream>
#include <algorithm>

using namespace std;

void swap_with_zero(int* array, int len, int n){
  int indexofzero =0;
      for(int i =0;i<len;i++){
        if(array[i] == 0){
          indexofzero = i;
          break;
        }
      }
      for(int i=0; i<len;i++){
        if(array[i] == n){
            swap(array[indexofzero],array[i]);
          break;
        }
      }
}

class Solution {
public:
    /**
     * 调用方法swap_with_zero来对array进行排序
     */
    void sort(int* array, int len) {
       for(int i =1; i<len; i++){
           swap_with_zero(array,len,array[i]);
           swap_with_zero(array,len,i);
       }
    }
};



int main(){
    int testarray[] = {5,4,2,3,1,0};
    Solution s;
    s.sort(testarray,6);
    for(int n:testarray){
      cout<<n<<endl;
    }
    return 0;
}
