// C++ implementation below
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

bool ifexist(int ints[], int low, int high,int k){
  while(low <= high){
    int middle = (low+high)/2;
    if(ints[middle] >k){
      high = middle-1;
    }else if(ints[middle]<k){
      low = middle +1;
    }else{
      return true;
    }
  }
  return false;
}


class Answer
{
public:
    static bool exists(int ints[], int size, int k)
    {
        // vector<int> v(ints,ints+size);
        return binary_search(ints,ints+size,k);
    }
};

int main(){
  Answer a;
  int ints[] ={1,2,3,4,11};
  cout<<Answer::exists(ints,5,3)<<endl;

}
