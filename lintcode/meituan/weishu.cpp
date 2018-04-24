#include <iostream>
#include <vector>
#include <string>


using namespace std;

int calculateWeishu(int n){
  string s;
  int count =0;
  for(int i=1;i<=n;i++){
    string temp =  to_string(i);
    s.append(temp);
    if(s.size() > 100){
      count += s.size();
      s.clear();
    }
  }
  return s.size() + count;
}

int main(){
  int T;
  cin>>T;
  vector<int> input(T,0);
  for(int i=0;i<T;i++){
    cin>>input[i];
  }
  for(int i =0;i<T;i++){
    cout<<calculateWeishu(input[i])<<endl;
  }
}
