#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

template<typename T> // because we don’t
inline float callWithMax(const T& a, const T& b) // know what T is, we
{ // pass by reference-tof(
  return (a > b ? a : b); // const — see Item20
}
class Lecture{
public:
  Lecture():
  name("Mike"),room("A123"),teacher("Jerk")
  {
    cout<<"name: "<<name<<endl<<"room: "<<room<<endl<<"teacher: "<<teacher<<endl;
  }
private:
  const string name;
  string room;
  string teacher;
};

int func(int a){
  static int value = a;
  return value;
}

int main(){
  auto a = callWithMax(10.09,10.98);
  cout<<std::fixed << std::setprecision(2)<<a<<endl;

  if(a=1){
    cout<<"you are making something wrong at line 30"<<endl;
  }
  Lecture lec;

  return 0;
}
