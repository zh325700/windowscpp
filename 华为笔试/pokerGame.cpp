#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string line;
    while(getline(cin,line)){
        if(line.find("joker JOKER")!=-1){
          cout<<"joker JOKER"<<endl;
        }else{
              string sub1 = line.substr(0,line.find("-"));
              string sub2 = line.substr(line.find("-")+1);
              int numberofcard1 = count(sub1.begin(),sub1.end(),' ')+1;
              int numberofcard2 = count(sub2.begin(),sub2.end(),' ')+1;
              string str="345678910JQKA2jokerJOKER";
              if(numberofcard1==numberofcard2){
              unsigned int  sub1value = str.find(sub1.substr(0,sub1.find(' ')));
              unsigned int  sub2value = str.find(sub2.substr(0,sub2.find(' ')));
                if(sub1value>sub2value){
                  cout<<sub1<<endl;
                }else{
                  cout<<sub2<<endl;
                }
              }else{
                if(numberofcard1 == 4){
                  cout<<sub1<<endl;
                }else if(numberofcard2 == 4){
                  cout<<sub2<<endl;
                }else{
                  cout<<"ERROR";
                }
              }
        }
      }
}
