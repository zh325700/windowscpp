#include <iostream>

using namespace std;

class EagerSingleTon{
protected:
  int n;
  static EagerSingleTon instance;
  EagerSingleTon(){
    cout<<"ctor is called"<<endl;
  }
  ~EagerSingleTon(){
    cout<<"deconstor is called"<<endl;
  }
public:
  static EagerSingleTon * getInstance(){
    return &instance;
  }
  void setn(int n){
    this->n = n;
  }
  int getn(){
    return n;
  }
};

EagerSingleTon EagerSingleTon::instance;

int main(){
  EagerSingleTon::getInstance()->setn(5);
  cout<<EagerSingleTon::getInstance()->getn()<<endl;
  return 0;
}
