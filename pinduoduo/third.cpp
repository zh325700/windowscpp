#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

class Node{
public:
  int left;
  int right;
  Node(int l, int r):left(l),right(r){
  }
};

int calculatejieceng(int n){
    if(n == 1 || n == 0){
      return 1;
    }
    return n*calculatejieceng(n-1);
}

int main(){
  int maxSubsetNum = 1;
  int needtodelete =0;
  int n =0;
  vector<Node *> records;
  vector<int> chongfudedianl;
  vector<int> chongfudedianr;
  cin >> n;
  int fenmu = (calculatejieceng(3)*calculatejieceng(n-3));
    if(fenmu != 0){
        maxSubsetNum = calculatejieceng(n)/fenmu;
    }

  for(int i =0; i<n; i++){
    int left =0;
    int right =0;
    cin>>left>>right;
    Node *aNode = new Node(left,right);
    records.push_back(aNode);
  }
  // for(int i =0; i<n; i++){
  //   int count =1;
  //   for(int j=0;j<n && j!=i; j++){
  //     if(records[j]->left == records[i]->left){
  //       count ++;
  //     }
  //   }
  //   if(count >=3){
  //     chongfudedianl.push_back(count);
  //   }
  // }
  //
  // for(int i =0; i<n; i++){
  //   int count =1;
  //   for(int j=0;j<n && j!=i; j++){
  //     if(records[j]->right == records[i]->right){
  //       count ++;
  //     }
  //   }
  //   if(count >=3){
  //     chongfudedianr.push_back(count);
  //   }
  // }

  cout <<maxSubsetNum<<endl;


  return 0;
}
