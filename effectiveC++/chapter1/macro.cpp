#include <iostream>
#include <iomanip>

using namespace std;

template<typename T> // because we don’t
inline float callWithMax(const T& a, const T& b) // know what T is, we
{ // pass by reference-tof(
  return (a > b ? a : b); // const — see Item20
}

int main(){
  auto a = callWithMax(10.09,10.98);
  cout<<std::fixed << std::setprecision(2)<<a<<endl;
  return 0;
}
