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
  if(exponent == 0){
    return 1;
  }else if(exponent ==1){
    return base;
  }else{
    double result = powerWithUnsigned(base,exponent>>1);
    result *= result;
    if(exponent & 1 == 1){
      result *= base;
    }
    return result;
  }
}

int main(){
  cout<<power(2,0)<<endl;
  return 0;
}
