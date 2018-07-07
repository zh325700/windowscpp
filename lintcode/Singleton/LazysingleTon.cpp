#include <iostream>

using namespace std;

class SingleTon{
protected:
   static SingleTon *instance;
   SingleTon(){
     cout<<"constor is created"<<endl;
   }
   ~SingleTon(){
     cout<<"deconstor is called"<<endl;
   }
public:
  int n =10;
  static SingleTon * getInstance(){
    if( !instance){
      instance = new SingleTon();
    }
    return instance;
  }

};

SingleTon *SingleTon::instance = nullptr;

int main(){
  cout<<SingleTon::getInstance()->n<<endl;
  cout<<SingleTon::getInstance()->n<<endl;
  return 0;
}
