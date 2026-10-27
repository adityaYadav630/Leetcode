class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans;
        for(int i=0;i<m;i++){
            string temp="";
            for(int j=0;j<n;j++){
               temp+='#';
            }
            ans.push_back(temp);
        }
        for(int i=0;i<n;i++){
            ans[0][i]='.';
        }
        for(int i=1;i<m;i++){
            ans[i][n-1]='.';
        }
        return ans;
    }
};