### Construct BST from Preorder Traversal

**Question Link: https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/**

```
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0 ;
        return treeBuild(i, preorder, INT_MAX);
    }
    TreeNode* treeBuild(int &i, vector<int>& preorder, int bound){
        if(i == preorder.size() || preorder[i] > bound) 
            return NULL ;
        
        TreeNode* root = new TreeNode(preorder[i++]) ;
        
        root->left = treeBuild(i, preorder, root->val);
        root->right = treeBuild(i, preorder, bound);
        
        return root ;
    }
};
```
