#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include <array>
#include <string>

using namespace std;


bool ifSatisfied(int i){
  return i%2 !=0;
}
// compare if ascending and desending are the same
// rbegin  Returns a reverse iterator pointing to the last element in the vector
std::string mirror_ends(const string& in)
{
    return std::string(in.rbegin(),
                       std::mismatch(in.begin(), in.end(), in.rbegin()).second);
}

int main(){

  array<int,9> foo = {3,5,7,11,13,17,19,19,23};
  int size = foo.size();
  for_each(foo.begin(), foo.end(), [](int &n){ cout<<n<<'\t'; });
  int num = count_if(foo.begin(), foo.end(), [](int i){return i ==23;});
  cout<<endl<<"Num equals to: "<<num<<endl;

  cout<<mirror_ends("abcdba")<<endl;

  int n =19;
  auto result1 = find(foo.begin(), foo.end(), n);
  if(result1!= foo.end()){
    cout<<"at position "<<result1-foo.begin()<<" we find: "<<n<<endl;
  }else{
    cout<<"We did not find "<<n<<" in the foo array"<<endl;
  }


  return 0;
}
