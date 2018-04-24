#include <iostream>
#include <vector>
#include <queue>
#include <iterator>
#include <algorithm>

using namespace std;

class Node{
public:
  int a ,b,c;
  int count;
  Node(int aa,int bb,int cc, int ccount){
    a =aa;
    b= bb;
    c=cc;
    count = ccount;
  }
};

int findSmallestCount(vector<int> &input,int &count){
  sort(input.begin(),input.end());
  if(input[0] == input[1] && input[1] == input[2]){
    return count;
  }else if(input[0] != input[1] && input[1] == input[2]){
    input[0] +=2;
    count ++;
    return  findSmallestCount(input,count);
  }else{
    input[0]++;
    input[1]++;
    count++;
    return findSmallestCount(input,count);
  }
}


int main(){
  vector<int> input(3,0);
  int maxnum = 0;
  for(int i =0;i<3;i++){
    cin>>input[i];
    if(maxnum <input[i]){
      maxnum = input[i];
    }
  }
  int count = 0;
  int output = findSmallestCount(input, count);
  cout<<output<<endl;
  return 0;
}
