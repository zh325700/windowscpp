#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val) {
        this->val = val;
        this->left = this->right = NULL;
    }
};


class Solution {

public:
    typedef vector<int>::iterator Iter;
    TreeNode *buildTreeRecur(Iter istart, Iter iend, Iter pstart, Iter pend){
        if(istart == iend){// have to be i_begin and i_end not p , be cause you find teh value by p iterator
            return NULL;
        }
        int rootvalue = *pstart;
        Iter itproot = find(istart,iend,rootvalue);
        TreeNode *node = new TreeNode(rootvalue);
        node->left = buildTreeRecur(istart,itproot,pstart+1,pstart+(itproot-istart));
        node->right = buildTreeRecur(itproot+1,iend,pstart+(itproot-istart)+1,pend);
        return node;
    }
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        // write your code here
        return buildTreeRecur(inorder.begin(), inorder.end(), preorder.begin(), preorder.end());
    }
};

int main(){
  vector<int> input = {1,2,3};
  cout<<*(input.end()-1)<<endl;
  return 0;
}
