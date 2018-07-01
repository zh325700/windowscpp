#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include <array>
#include <string>

using namespace std;

int main(){

string s1 = "hello hello hey, qing gei wo wu taii";
string s = "qing";

auto result_n = search_n(s1.begin(), s1.end(),2,'i');
auto result = search(s1.begin(), s1.end(), s.begin(), s.end());
if(result_n!= s1.end()){
  cout<<"find consequence i at:"<<distance(s1.begin(),result_n)<<endl;
}
if(result == s1.end()){
  cout<<"can not find: "<<s<<endl;
}else{
  cout<<s<<" is found at position: "<<distance(s1.begin(),result)<<" of "<<s1<<endl;
}
  return 0;
}
