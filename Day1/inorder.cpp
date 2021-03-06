.......DFS approch........
    
    class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL)return ;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        return ans;
        
    }
};



.......BSF approch..................

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        stack<TreeNode*> s;
        pushAllLeft(s, root);
        vector<int> result;
        while(!s.empty()) {
            TreeNode* p = s.top();
            s.pop();
            result.push_back(p->val);
            pushAllLeft(s,p->right);
        }
        return result;
    }
    
    void pushAllLeft(stack<TreeNode*>& s, TreeNode* root) {
        while(root!=NULL) {
            s.push(root);
            root = root->left;
        }
    }
};
