#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main(){
  string time;
  cin >> time;
  int xiaoshi;
  int fenzhong;
  float finaldegree;
  int size = 0;
  int indexofmaohao=0;
  float xdegree = 0;
  float fdegree = 0;
  size = time.length();
  for(int i =0; i<size;i++){
    if(time.at(i) == ':'){
      indexofmaohao = i;
    }
  }
  string x = time.substr(0,indexofmaohao);
  string f = time.substr(indexofmaohao+1,size-indexofmaohao-1);
  stringstream geek(x);
  stringstream geek2(f);
  geek >> xiaoshi;
  geek2 >> fenzhong;


  if(xiaoshi>=12){
    xiaoshi = xiaoshi -12;
  }
  xdegree = xiaoshi *30;
  xdegree += float(fenzhong) / 2;
  fdegree =  fenzhong *6;
  finaldegree = xdegree - fdegree;
  if(finaldegree >=0){
    if(finaldegree <=180){
      cout<<finaldegree<<endl;
      return 0;
    }else{
      cout<<360-finaldegree<<endl;
      return 0;
    }
  }else{
    finaldegree = (-1)*finaldegree;
    if(finaldegree <=180){
      cout<<finaldegree<<endl;
      return 0;
    }else{
      cout<<360-finaldegree<<endl;
      return 0;
    }
  }
  return 0;
}
