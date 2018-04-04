#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Node{
public:
  int left;
  int right;
  Node(int l, int r):left(l),right(r){
  }
};
bool ltohighl(Node *first, Node *second){
  return first->left < second -> left;
}

bool ltohighr(Node *first, Node *second){
  return first->right < second -> right;
}

int findmin(vector<Node *> &records, int n , int k){
  for(int i =0; i<n; i++){
    int count =0;
    for(int j = records[i]->left; j<=records[i]->right; j++){
      for(int ii =0; ii<n && ii!=i; ii++){
        if(records[ii]->left <=j && records[ii]->right >=j){
          count ++;
        }
        if(count == k-1){
          return j;
        }
      }
      count =0;
    }
  }
  return -1;
}

int findmax(vector<Node *> &records, int n , int k){
  for(int i =n-1; i>=0; i--){
    int count =0;
    for(int j = records[i]->right; j>=records[i]->left; j--){
      for(int ii =n-1; ii>=0 && ii!=i; ii--){
        if(records[ii]->left <=j && records[ii]->right >=j){
          count ++;
        }
        if(count == k-1){
          return j;
        }
      }
      count =0;
    }
  }
  return -1;
}


int main(){
  int n = 0;
  int k = 0;
  cin>>n>>k;
  if(k<0 || k>n){
    cout << "error"<<endl;
    return 0;
  }
  vector<Node *> records;
  for(int i =0; i <n; i++){
    int left =0;
    int right =0;
    cin>>left>>right;
    Node *aNode = new Node(left,right);
    records.push_back(aNode);
  }
  sort(records.begin(),records.end(),ltohighl);
  int minvalue = findmin(records,n,k);
  sort(records.begin(),records.end(),ltohighr);
  int maxvalue = findmax(records,n,k);
  if(minvalue == -1 || maxvalue ==-1){
    cout<<"error"<<endl;
    return 0;
  }
  cout << minvalue <<" "<<maxvalue<<endl;
  return 0;
}
