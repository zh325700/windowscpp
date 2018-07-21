// CPP program to check for balanced parenthesis.
#include<bits/stdc++.h>
#include <string>
using namespace std;

// function to check if paranthesis are balanced
bool areParanthesisBalanced(string expr)
{
  stack<char> stk;
  char popChar;
  int size = expr.length();

  for(int i = 0; i<size; i++){
    if(expr[i] == '(' || expr[i] == '{' || expr[i] == '[' ){
      stk.push(expr[i]);
      continue;                 // 这个continue很关键啊！！
    }

    if(stk.empty()){
      return false;
    }

    popChar = stk.top();
    stk.pop();

    switch(expr[i]){
      case ')':
          if(popChar == '{' || popChar =='['){
            return false;
          }
          break;
      case '}':
          if(popChar == '(' || popChar =='['){
            return false;
          }
          break;
      case ']':
          if(popChar == '{' || popChar =='('){
            return false;
          }
          break;
    }
  }

  if(stk.empty()){
    return true;
  }
  return false;
}

// Driver program to test above function
int main()
{
    string expr;
     while(cin>>expr){
       if (areParanthesisBalanced(expr))
           cout << "Balanced"<<endl;
       else
           cout << "Not Balanced"<<endl;
     }

    return 0;
}
