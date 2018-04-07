#include <iostream>
#include <limits.h>

using namespace std;

class TreeNode{
public:
  int val;
  TreeNode *left,*right;
  TreeNode(int val){
    this->val =val;
    left = NULL;
    right = NULL;
  }
};

class Solution{
public:
  int minv = INT_MAX;
  TreeNode *result;
  TreeNode * getNearestNode(TreeNode *root,int val){
    if(root == NULL){
      return result;
    }
    if(root->val == val){
      return root;
    }
    if(minv >abs( root->val - val)){
      result = root;
      minv = abs(root->val - val);
    }
    if(root->val > val){
      result = getNearestNode(root->left,val);
    }else{
      result = getNearestNode(root->right,val);
    }
    return result;
  }
};

int main(){
  Solution s;
  TreeNode *myTreeNode = new TreeNode(10);
  TreeNode *myTreeNode1 = new TreeNode(1);
  TreeNode *myTreeNode4 = new TreeNode(20);
  TreeNode *myTreeNode3 = new TreeNode(15);
  myTreeNode->left = myTreeNode1;
  myTreeNode->right = myTreeNode4;
  myTreeNode4->left = myTreeNode3;
  cout<<s.getNearestNode(myTreeNode,18)->val<<endl;
  return 0;
}
