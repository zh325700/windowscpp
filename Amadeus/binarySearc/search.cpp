#include <iostream>
#include <algorithm>
#include <iterator>
#include <random>
#include <vector>

using namespace std;

int main()
{
  vector<int> hello{1,4,8,9,2,9,4,7,10};
  sort(hello.begin(),hello.end());
  int n = 11;
  if(binary_search(hello.begin(),hello.end(),n)){
    cout<<"find "<<n<<" !" <<endl;
  }else{
    cout<<"not find"<<endl;
  }

}
