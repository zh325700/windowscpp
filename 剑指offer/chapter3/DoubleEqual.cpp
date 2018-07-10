#include <iostream>
#include <float.h>
#include <math.h>

using namespace std;
//同一个浮点数在机器内可以有多种表示,所以不能用 == 来表示
int main(){
  double d1=1.01,d2=1.01;
  if(fabs(d1-d2)< DBL_MIN){
    cout<<"nihao"<<endl;
  }
  return 0;
}
