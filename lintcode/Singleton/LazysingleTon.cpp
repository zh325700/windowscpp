#include <iostream>

using namespace std;

class SingleTon{
protected:
   int n =0;
   static SingleTon *instance;
   SingleTon(){
     cout<<"constor is created"<<endl;
   }
   ~SingleTon(){
     cout<<"deconstor is called"<<endl;
   }
public:

  static SingleTon * getInstance(){
    if( !instance){
      instance = new SingleTon();
    }
    return instance;
  }

  int getn(){
    return n;
  }

  void setn(int n){
    this->n = n;
  }

};

SingleTon *SingleTon::instance = nullptr;

int main(){
  SingleTon::getInstance() ->setn(10);
  cout<<SingleTon::getInstance() -> getn()<<endl;
  return 0;
}
