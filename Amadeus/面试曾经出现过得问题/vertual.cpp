#include <iostream>

using namespace std;

class A{
public:
   virtual void func();
};

void A::func(){
  cout<<"ninhao"<<endl;
}

class B:public A{
public:
  virtual void func() override;
};

void B::func(){
  cout<<"nihao woshi B"<<endl;
}

int main(){
  A *a = new B();
  a->func();
}
