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
    TreeNode* solution(vector<int>&preorder,int &idx,int low,int high){
        if(idx>=preorder.size())return NULL;
     if(preorder[idx]>high||preorder[idx]<low){
        return NULL;
     }
     TreeNode* root=new TreeNode(preorder[idx]);
    idx++;
     root->left=solution(preorder,idx,low,root->val);
     root->right=solution(preorder,idx,root->val,high);
     return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx=0;
        return solution(preorder,idx,INT_MIN,INT_MAX);
    }
};