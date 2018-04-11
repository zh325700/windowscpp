#include<iostream>
#include <iomanip>
using namespace std;

int main(){
  int weight;
  float price=0;
  cin>>weight;
  if(weight <= 10){
    price = 3.50;
  }
  else{
    weight = weight -10;
    price = 3.50 + weight*0.75;
  }
  cout<<setiosflags(ios::fixed)<<setprecision(2)<<price<<endl;
}
