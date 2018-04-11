#include <iostream>

using namespace std;


class Singleton
{
public:
    static Singleton* getInstance()
    {
        static Singleton instance;
        return &instance;
    }
    int getn(){
      return n;
    }

protected:
    int n=6 ;
    struct Object_Creator
    {
        Object_Creator()
        {
            cout<<"Object_Creator constructor"<<endl;
            Singleton::getInstance();
        }
    };
    static Object_Creator _object_creator;

    Singleton() {cout<<"Singleton constructor"<<endl;}
    ~Singleton() {cout<<"destructor is called"<<endl;}
};


Singleton::Object_Creator Singleton::_object_creator;

int main(){
  cout<<Singleton::getInstance()->getn()<<endl;
  return 0;
}
