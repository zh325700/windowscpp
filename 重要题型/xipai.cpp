#include <iostream>
#include <deque>
#include <vector>

using namespace std;

void fenpai(deque<double> &wholeArray,deque<double> &left, deque<double> &right){
  left.clear();
  right.clear();
  int size = wholeArray.size();
  int leftsize = size /2;
  int rightsize = size - leftsize;
  for(int i =0;i<leftsize;i++){
    left.push_back(wholeArray[i]);
  }
  for(int j =0;j<rightsize;j++){
    right.push_back(wholeArray[j+leftsize]);
  }
}

deque<double> xipai(deque<double> &left, deque<double> &right){
  deque<double> currentque;
  int size = left.size();
  for(int i =0;i<size;i++){
    currentque.push_back(left[i]);
    currentque.push_back(right[i]);
  }
  return currentque;
}

int main(){
  int zushu = 0;
  cin>>zushu;
  int n =0,k=0;
  deque<double> result;
  deque<double> left;
  deque<double> right;
  deque<double> wholeArray;
  for(int i = 0; i<zushu;i++){
    cin>>n>>k;
    for(int j=0;j<2*n;j++){
      double value ;
      cin>>value;
      wholeArray.push_back(value);
    }
    result = wholeArray;
    for(int ii = 0;ii<k;ii++){
      fenpai(result,left,right);
      result = xipai(left,right);
    }
    for(auto val :result){
      cout<<val<<' ';
    }
    result.clear();
    // left.clear();
    // right.clear();
    wholeArray.clear();
  }
  cout<<endl;
}
