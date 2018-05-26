#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

class Solution{
public :
   Solution(){}
   int stringDistance(string &a, string &b){
     if(a.length() != b.length()){
       return -1;
     }
      int count=0;
      // char *charA = new char [a.length()+1];
      // char *charB = new char [b.length()+1];
      // strcpy(charA,a.c_str());
      // strcpy(charB,b.c_str());   因为不用改变里面的值所以可以用string::at 但是如果改变里面的值，要用char *

      for(int i = 0;i< a.length();i++){
        if(a.at(i) != b.at(i) ){
          count++;
        }
      }
      return count;
   }

   int lowestInt(string &input){
     char *candidateInt = new char[input.length()+1];
     strcpy(candidateInt,input.c_str());
     long lowest=1;
     while(1){
       string stringLowst = std::to_string(lowest);
       char const *numchar = stringLowst.c_str();
       for(int i =0;i<stringLowst.length();i++){
         for(int j=0;candidateInt[j]!='\0';j++){
           if(candidateInt[j] == numchar[i]){
             candidateInt[j] = ' ';
             break;
           }
           if(candidateInt[j+1] == '\0'){
             return lowest;
           }
         }
       }
       lowest++;
       strcpy(candidateInt,input.c_str());
     }
   }
};


int main(){
  Solution solution;
  string input1 = "aabbabb"; // big one
  string input2 = "bab"; // small one
  int output=0;
  for(int i =0;i<=(input1.length()-input2.length());i++){
    string small = input1.substr(i,input2.length());
    output += solution.stringDistance(small,input2);
  }

  cout<<output<<endl;
  // string candidate1 = "55";
  // string candidate2 = "1234567890";
  // output = solution.lowestInt(candidate1);
  // cout<<output<<endl;
  // output = solution.lowestInt(candidate2);
  // cout<<output<<endl;
  return 0;
}
