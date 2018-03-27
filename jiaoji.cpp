#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <unordered_map>
#include <array>

using namespace std;

void hashInterSection(int a[], int b[], int aSize, int bSize)  {
  // std::unordered_map<int, std::string> mapA;
  // std::unordered_map<int, std::string> mapB;
  std::unordered_set<int> setA;
  // std::unordered_set<int> setB;
  for(int i =0; i<aSize; i++){
    setA.insert(a[i]);
  }

  for(int i=0; i<bSize; i++){
    if(setA.find(b[i]) != setA.end()){
      cout<<b[i]<<'\t';
    }
  }
  cout<<endl;
}

int main(){
  int a[] = {1,2,3,4,5,6,7};
  int b[] = {2,5,7,11,13,19};
  int aSize = sizeof(a)/sizeof(*a);
  int bSize = sizeof(b)/sizeof(*b);
  cout << "the size of a is :"<< aSize<<endl;
  hashInterSection(a,b,aSize,bSize);
}
