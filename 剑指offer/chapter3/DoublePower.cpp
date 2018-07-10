#include <iostream>
#include <float.h>
#include <math.h>

using namespace std;

bool falseFlag = false;
double powerWithUnsigned(double base ,unsigned int exponent);

bool doubleequal(double d1, double d2){
  if(fabs(d1-d2)< DBL_MIN){
    return true;
  }
  return false;
}

double power(double base, int exponent){
  double result = 1.0;
  if(doubleequal(base,0.0) && exponent <0){
    falseFlag = true;
    return 0.0;
  }
  if(exponent <0){
    unsigned int newexponent = (unsigned int) (-exponent);
    result = powerWithUnsigned(base, newexponent);
    return 1.0/result;
  }else {
    unsigned int newexponent = (unsigned int) (exponent);
    result = powerWithUnsigned(base, newexponent);
    return result;
  }
}

double powerWithUnsigned(double base ,unsigned int exponent){
  double result = 1.0;
  for(int i=0;i<exponent;i++){
    result*= base;
  }
  return result;
}

int main(){
  cout<<power(2,6)<<endl;
  return 0;
}
