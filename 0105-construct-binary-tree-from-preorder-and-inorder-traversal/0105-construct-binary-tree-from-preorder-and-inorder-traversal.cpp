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
    TreeNode* solution(vector<int>& preorder,int &ps,int pe ,vector<int>& inorder,int is,int ie,unordered_map<int,int>&m){
     if(is>ie||ps>pe)return NULL;
     TreeNode* root=new TreeNode(preorder[ps]);
     int idx=m[preorder[ps]];
     ps++;
     root->left=solution(preorder,ps,pe,inorder,is,idx-1,m);
     root->right=solution(preorder,ps,pe,inorder,idx+1,ie,m);
     return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>m;
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        int ps=0;
        return solution(preorder,ps,preorder.size()-1,inorder,0,inorder.size()-1,m);
    }
};