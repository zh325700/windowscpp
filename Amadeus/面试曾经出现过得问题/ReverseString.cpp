#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void reverseString(string &str){
  if(str.length() == 0){
    return;
  }
  int length = str.length();

  for(int i =0;i<length/2;i++){
    swap(str[i],str[length-i-1]);
  }
}

char* reverseConstString(char const* str)
{
    int len = strlen(str);
    char * rev = new char[len+1];
    strcpy(rev,str);
    for(int i =0, j=len-1;i<j;i++,j--){
      swap(rev[i],rev[j]);
    }

    return rev;
}

int main(){
  string str = "you are good";
  char *nihao = "you are bad";
  char *rev = reverseConstString(nihao);
  cout<<"using const: "<<rev<<endl;
  // reverseString(str);
  reverse(str.begin(),str.end());
  cout<<str<<endl;



  return 0;
}
