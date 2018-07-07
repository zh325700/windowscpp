#include <iostream>

using namespace std;

// This is the eager version
// class Singleton{
// public:
//   int n =10;
//   static Singleton *getInstance(){
//       return &instance;
//   }
// private:
//   static Singleton instance;
//   Singleton(){
//     cout<<"new instance created"<<endl;
//   }
//
// };

// This is the lazy version
class Singleton{
public:
  int n =10;
  static Singleton * getInstance(){
    if(instance == NULL){
      instance = new Singleton();
    }
    return instance;
  }
private:
  Singleton(){cout<<"ctor is called"<<endl;}
  ~Singleton(){cout<<"dtor is called";}
  static Singleton *instance;
};

Singleton *Singleton::instance = nullptr;

int main(){
  cout<<Singleton::getInstance()->n<<endl;
  return 0;
}
