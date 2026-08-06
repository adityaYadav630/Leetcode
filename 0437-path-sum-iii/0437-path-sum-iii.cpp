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
int ans=0;
    void  solution(TreeNode* root,long long curr, int targetSum,unordered_map<long long,int>&m){
      if(root==NULL)return;
      curr+=root->val;
      ans+=m[curr-targetSum];
            m[curr]++;
      solution(root->left,curr,targetSum,m);
      solution(root->right,curr,targetSum,m);
      m[curr]--;
    }
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long,int>m;
        m[0]=1;
        solution(root,0,targetSum,m);
        return ans;
    }
};