#include <algorithm>
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

void myswap (int *a, int *b){
  swap(*a,*b);
}

int main()
{
  int a =5,b=9;
  myswap(&a,&b);
  cout<<a<<' '<<b<<endl;
}
