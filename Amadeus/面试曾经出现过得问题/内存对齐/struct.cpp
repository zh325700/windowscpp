#include <iostream>

using namespace std;

struct people{
  int a ;
  long long b;
};
union AnotherPeople{
  char a ;
  int aint ;
  double b;
};

int main(){
  people p1;
  cout<<sizeof(people)<<endl;
  cout<<sizeof(AnotherPeople)<<endl;
}
