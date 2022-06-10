...............DFS APPROCH...........
  
  class Solution {
public:
    void Preorder(TreeNode *root,vector<int>&ans){
        if(root == NULL) return;
        
        ans.push_back(root->val);
        Preorder(root->left,ans);
        Preorder(root->right,ans);
        
        return;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        Preorder(root,ans);
        return ans;
        
    }
};
  
  
  
  ............BFS APPROCH.............
  
  class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        if(root==NULL)return ans;
        s.push(root);
        while(!s.empty()){
           TreeNode* currnode=s.top();
            s.pop();
            ans.push_back(currnode->val);
            if(currnode->right!=NULL){
                s.push(currnode->right);
            }
            if(currnode->left!=NULL){
                s.push(currnode->left);
            }
        }
        return ans;
        
    }
};
