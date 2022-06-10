.......DSF APPROCH ........
  
  
  class Solution {
public:
    void Postorder(TreeNode* root,vector<int>&ans){
        if(root==NULL)return ;
        Postorder(root->left,ans);
        Postorder(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        Postorder(root,ans);
        return ans;
        
    }
};





.........BFS APPROCH............
  class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int>ans;
        stack<TreeNode*>s;
        if(root==NULL)return ans;
        s.push(root);
        while(!s.empty()){
           TreeNode* currnode=s.top();
            s.pop();
            ans.push_back(currnode->val);
            if(currnode->left!=NULL){
                s.push(currnode->left);
            }
            if(currnode->right!=NULL){
                s.push(currnode->right);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
