#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

vector<int> xipai(vector<int> left, vector<int> right){
  int sizel = left.size();
  int sizer = right.size();
  vector<int> result(13,0);
  int i=0,j=0;
  while(sizel >0 && sizer>0){
    int leftcard = left[sizel-1];
    int rightcard = right[sizer-1];
    sizel--;
    sizer--;
    result.push_back(leftcard);
    result.push_back(rightcard);
  }
  while(sizel>0){
    int leftcard = left[sizel-1];
    sizel--;
    result.push_back(leftcard);
  }
  while(sizer>0){
    int rightcard = right[sizer-1];
    sizer--;
    result.push_back(rightcard);
  }
  reverse(result.begin(),result.end());
  return result;
}

vector<int> fenpai(vector<int> input, int leftnum){
  vector<int> left;
  vector<int> right;
  vector<int> result;
  int size = input.size();
  int i =0;
  for(; i<leftnum; i++){
    left.push_back(input[i]);
  }
  for(;i<13;i++){
    right.push_back(input[i]);
  }
  result = xipai(left,right);
  return result;
}

int main(){
  // vector<int> input = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  // vector<int> result = fenpai(input,6);
  // result = fenpai(result,6);
  // for(int i=0; i<13; i++){
  //   cout<<result[i]<<' ';
  // }
  // cout<<endl;

  vector<int> input;
  vector<int> finalresult;
  int count;
  for(int i=0;i<13;i++){
    int card;
    cin>>card;
    input.push_back(card);
  }
  cin>>count;
  vector<int> leftnumsArray(count,0);
  for(int j=0; j<count;j++){
    int aleftnum;
    cin>>aleftnum;
    leftnumsArray[j] = aleftnum;
  }
  finalresult = input;
  for(int i =0;i<count;i++){
    finalresult = fenpai(finalresult,leftnumsArray[i]);
  }

  for(int i=0;i<12;i++){
    cout<<finalresult[i]<<' ';
  }
  cout<<finalresult[12];
  cout<<endl;
  return 0;
}
