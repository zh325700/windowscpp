#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class MyQueue {
public:
    MyQueue():stk1{},stk2{} {
        // do intialization if necessary
    }


    void push(int element) {
        stk1.push(element);
    }

    int pop() {
      int value = 0;
      if(stk1.empty()&&stk2.empty()){
        return -1;
      }
      if(stk2.empty()){
        while(!stk1.empty()){
          value = stk1.top();
          stk1.pop();
          stk2.push(value);
        }
        value = stk2.top();
        stk2.pop();
      }else{
        value = stk2.top();
        stk2.pop();
      }
      return value;
    }

    int top() {
      if(stk1.empty()&&stk2.empty()){
        return -1;
      }
      if(stk2.empty()){
        while(!stk1.empty()){
          int value = stk1.top();
          stk1.pop();
          stk2.push(value);
        }
        return stk2.top();
      }else{
        return stk2.top();
      }
    }
private:
    stack<int> stk1;
    stack<int> stk2;
};

int main(){
  return 0;
}
