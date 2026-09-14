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
    vector<tuple<int,int,int>>temp;
    void DFS(int r,int c,TreeNode* root){
       if(root==NULL)return ;
       temp.push_back({c,r,root->val});
       DFS(r+1,c-1,root->left);
       DFS(r+1,c+1,root->right);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        DFS(0,0,root);
        vector<vector<int>>ans;
        sort(temp.begin(),temp.end());
        int precol=INT_MIN;
        for(auto [col,row,val]:temp){
            if(precol!=col){
             ans.push_back({});
             precol=col;
            }
            ans.back().push_back(val);
        }
        return ans;
    }
};