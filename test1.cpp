#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Functest {
public:
  Functest() {};
  bool operator() (const int &left,const int &right){
		return (left < right);
	}
};

int main(){
//  different ways to loop through the
	vector<int> a{1,2,3,4,5};
	for_each(a.begin(),a.end(),[](int &x){x = x+1;});
	for(int out:a){
		cout<<out<<"\t";
	}
	cout<<endl;
	a.push_back(9);
	a.push_back(7);

  for(vector<int>::iterator it = a.begin(); it!=a.end() ;it++){
    *it += 2;
  }

	//using functor with sort
	sort(a.begin(),a.end(),Functest());
	for_each(a.begin(),a.end(),[](int value){cout<<value<<"\t";});
	cout<<endl;

  vector<int>::iterator ptr = a.begin();
  // advance(ptr, 5);
  cout<<*ptr<<endl;

}
