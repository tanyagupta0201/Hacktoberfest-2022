class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        stack<TreeNode*>st;
        TreeNode* Node=root;
        while(true){
            if(Node!=NULL){
                st.push(Node);
                Node=Node->left;
            }
            else{
                if(st.empty()==true)break;
                Node=st.top();
                st.pop();
                ans.push_back(Node->val);
                Node=Node->right;
            }
        }
        int i=0;
        int n=ans.size();
        int j=n-1;
        while(i < j){
            if(ans[i] + ans[j] == k){
                return true;
                break;
            }
            else if(ans[i] + ans[j] < k){
                i++;
                //return false;
            }
            else{
                j--;
                //return false;
            }
        }
        return false;
    }
};
