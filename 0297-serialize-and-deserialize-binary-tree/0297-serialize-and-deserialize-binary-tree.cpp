/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void solution(TreeNode*root,string &ans){
        if(root==NULL){
            ans=ans+"N,";
            return ;
        }
        ans+=to_string(root->val)+",";
        solution(root->left,ans);
        solution(root->right,ans);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans="";
        solution(root,ans);
        return ans;
    }

    TreeNode* solution2(string &data,int &idx){
     if(data[idx]=='N'){
        idx+=2;
        return NULL;
     }
     int val=0;
     int sign=1;
     if(data[idx] == '-') {
        sign = -1;
        idx++;
    }
     while(data[idx]!=','){
        val=val*10+(data[idx]-'0');
        idx++;
     }
     idx++;
     TreeNode* root=new TreeNode(val*sign);
     root->left=solution2(data,idx);
     root->right=solution2(data,idx);
     return root;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int idx=0;
       return solution2(data,idx); 
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));