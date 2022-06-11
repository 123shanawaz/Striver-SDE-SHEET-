void leftviews(Node *root,vector<int>&ans,set<int>&s,int curr){
   if(root==NULL) {
       return;
   }
   if(s.find(curr)==s.end()){
       s.insert(curr);
       ans.push_back(root->data);
   }
   leftviews(root->left,ans,s,curr+1);
   leftviews(root->right,ans,s,curr+1);
   
   return ;
   
}


vector<int> leftView(Node *root)
{
    set<int>s;
   vector<int>ans;
   leftviews(root,ans,s,1);
   return ans;
}
