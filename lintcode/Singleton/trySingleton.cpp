#include <iostream>

using namespace std;

class Singleton{
private:
  static Singleton instance;
  Singleton(){
    cout<<"ctor is called"<<endl;
  }
  ~Singleton(){
    cout<<"dector is called"<<endl;
  }
public:
  static Singleton *getinstance(){
    return &instance;
  }

};

Singleton Singleton::instance;

int main(){
  Singleton::getinstance();
  return 0;
}
