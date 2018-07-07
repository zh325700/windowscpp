#include <iostream>

using namespace std;

class EagerSingleTon{
protected:
  static EagerSingleTon instance;
  EagerSingleTon(){cout<<"ctor is called"<<endl;}
  ~EagerSingleTon(){cout<<"dtor is called"<<endl;}
public:
  int n =10;
  static EagerSingleTon * getInstance(){
    return &instance;
  }
};

EagerSingleTon EagerSingleTon::instance;

int main(){
  cout<<EagerSingleTon::getInstance()->n<<endl;
  return 0;
}
