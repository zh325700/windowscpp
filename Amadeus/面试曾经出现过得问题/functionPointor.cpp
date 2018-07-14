#include <stdio.h>
#include <iostream>
// A normal function with an int parameter
// and void return type
using namespace std;

void fun(int a)
{
    printf("Value of a is %d\n", a);
}

int notFun(int n){
  return n;
}

int main()
{
    // fun_ptr is a pointer to function fun()
    void (*fun_ptr)(int) = &fun;
    int (*function_ptr)(int) = &notFun;

    /* The above line is equivalent of following two
       void (*fun_ptr)(int);
       fun_ptr = &fun;
    */

    // Invoking fun() using fun_ptr
    // (*fun_ptr)(10);
    cout<<(*function_ptr)(100)<<endl;

    return 0;
}
