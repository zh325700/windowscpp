#include <stdio.h>
#include <iostream>
// A normal function with an int parameter
// and void return type
using namespace std;

void fun(int a)
{
    printf("Value of a is %d\n", a);
}

void func_2(int a){
  cout<<"I am function two"<<a<<endl;
}

int notFun(int n){
  return n;
}

void onclick(void (*func_ptr)(int)){
  (*func_ptr)(123);   // call back to teh function
}

int main()
{
    // fun_ptr is a pointer to function fun()
    void (*func_ptr[])(int) = {&fun,&func_2};

    int (*function_ptr)(int) = &notFun;



    /* The above line is equivalent of following two
       void (*fun_ptr)(int);
       fun_ptr = &fun;
    */

    // Invoking fun() using fun_ptr
    // (*fun_ptr)(10);
    cout<<(*function_ptr)(100)<<endl;
    onclick(func_ptr[0]);
    onclick(func_ptr[1]);

    return 0;
}
