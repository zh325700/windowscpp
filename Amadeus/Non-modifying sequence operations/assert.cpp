#include <iostream>
#include <vector>
#include <assert.h>
#include <memory>
#include <string>

using namespace std;

class people{
  private:
     string name, birthday;
  public:
    people(string aname,string abirthday):name(aname),birthday(abirthday){
      cout<<"new person created"<<endl;
    }
    string getname(){
      return name;
    }
    void setname(string newname){
      name = newname;
    }
    void printAllInfo(){
      cout<<"The name is : "<<name<<" And the birthday is : "<<birthday<<endl;;
    }

};

int main(){
  shared_ptr<int> ptr2 (new int(10));
  shared_ptr<int> ptr1 =  std::make_shared<int>(100);
  cout<<*ptr1<<endl;
  *ptr2 = 20000;
  cout<<"ptr2 :  "<<*ptr2<<endl;

  shared_ptr<people> apeople(new people("shuaigehan","17/3/1995"));
 apeople->printAllInfo();
 apeople->setname("hange");
 apeople->printAllInfo();

  vector<int> v1;
  char *a ;
  assert(a != NULL);
  cout<<"Hello world"<<endl;

  return 0;
}
