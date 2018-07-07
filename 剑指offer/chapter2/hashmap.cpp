#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <list>

using namespace std;

int main(){

  vector<int> input = {1,3,6,10,15,9};
  unordered_set<int> my_map;

  for(auto n: input){
    my_map.insert(n) ;
  }
  list<int> my_list = {1,2,3};
  for(auto n : my_list){
    cout<<n;
  }
  cout<<endl;

  while(1){
    int n =0;
    cout<<"please insert the number you wanna search: ";
    cin>>n;
    if(my_map.find(n)!=my_map.end()){
      cout<<"found"<<endl;
    }else{
      cout<<"not found"<<endl;

    }
  }


  return 0;
}
