#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool findifexist(vector<string> &inputs,string target){
  for(auto n:inputs){
    if(n == target){
      return true;
    }
  }
  return false;
}


int main(){
  string line;
  vector<string> onebyte{"char","unsigned char","char ","unsigned char "};
  vector<string> twobyte{"short","unsigned short","short ","unsigned short "};
  vector<string> fourbyte{"int","unsigned int","long","unsigned long","int ","unsigned int ","long ","unsigned long "};
  // string onebyte = "char unsigned char";
  // string twobyte = "short unsigned short";
  // string fourbyte = "int unsigned int long unsigned long";
  while(getline(cin,line)){
    // int numberofspace = count(line.begin(),line.end(),' ');
    unsigned int f = line.rfind(' ');
    string typeinfo = line.substr(0,f);
    // cout<<typeinfo<<endl;
    if(typeinfo.find('*')!=-1){
      typeinfo = typeinfo.substr(0,f-1);
    }
    // cout<<typeinfo<<endl;
    int firstvalue;
    string sizeofarray1;
    unsigned int firstkuang1 = line.find('[');
    unsigned int firstkuang2 = line.find(']');
    unsigned int startofkuang = line.rfind('[');
    unsigned int endofkuang = line.rfind(']');
    if(firstkuang1!=startofkuang){
      sizeofarray1 = line.substr(firstkuang1+1,firstkuang2-firstkuang1-1);
      firstvalue = atoi(sizeofarray1.c_str());
      if(firstvalue<=0){
        firstvalue =0;
      }
    }
    string sizeofarray = line.substr(startofkuang+1,endofkuang-startofkuang-1);
    // cout<<sizeofarray<<endl;
    int value = atoi(sizeofarray.c_str());
    if(value<=0){
      value =0;
    }
    if(firstkuang1!=startofkuang){
      value = value*firstvalue;
    }
    // cout<<value<<endl;
    if(findifexist(onebyte,typeinfo)){
        cout<<value<<endl;
    }else if(findifexist(twobyte,typeinfo)){
        cout<<value*2<<endl;
    }else if(findifexist(fourbyte,typeinfo)){
        cout<<value*4<<endl;
    }else{
      cout<<0<<endl;
    }
  }
  return 0;
}
