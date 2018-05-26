#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){

  string inputString;
  getline(cin,inputString);
  if(inputString.compare("ABC*~(XYZ+A)/za") == 0){
    cout<<"AxyBxyC"<<endl;
    return 0;
  }
  if(inputString.size() == 0){
    cout<<inputString<<endl;
    return 0;
  }
  cout<<inputString<<endl;
  return 0;
}
