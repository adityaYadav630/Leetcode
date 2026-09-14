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
   bool check(TreeNode* root, TreeNode* subRoot){
    if(subRoot==NULL&&root==NULL)return true;
     if(root==NULL||subRoot==NULL)return false;
    if(root->val!=subRoot->val)return false;
     bool left=check(root->left,subRoot->left);
       bool right =check(root->right,subRoot->right);
    return left&&right;
   }
    bool solution(TreeNode* root, TreeNode* subRoot){
       if(root==NULL)return false;
       bool curr=false;
       if(root->val==subRoot->val){
         curr=check(root,subRoot);
       }
       bool left=solution(root->left,subRoot);
       bool right =solution(root->right,subRoot);
       return left||right||curr;        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return solution(root,subRoot);
    }
};