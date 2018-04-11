class Solution {
    /**
     *@param preorder : A list of integers that preorder traversal of a tree
     *@param inorder : A list of integers that inorder traversal of a tree
     *@return : Root of a tree
     */
public:
    typedef vector<int>::iterator Iter;
    TreeNode *buildTreeRecur(Iter istart, Iter iend, Iter pstart, Iter pend)
    {
        if(istart == iend){
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
