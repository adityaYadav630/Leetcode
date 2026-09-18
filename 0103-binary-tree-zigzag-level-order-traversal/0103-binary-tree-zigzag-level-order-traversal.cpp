/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        int level=1;
        while(q.size()){
         int size=q.size();
         vector<int>curr;
         for(int i=0;i<size;i++){
            TreeNode*temp=q.front();
            curr.push_back(temp->val);
            q.pop();
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
         }
         if(level%2==0){
            reverse(curr.begin(),curr.end());
         }
        ans.push_back(curr); 
        level++;
        }
        return ans;
    }
};