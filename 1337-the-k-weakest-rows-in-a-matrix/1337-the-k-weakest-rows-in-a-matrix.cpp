class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
     unordered_map<int,int>m;
     for(int i=0;i<mat.size();i++){
        int count=0;
      for(int j=0;j<mat[i].size();j++){
        if(mat[i][j]==1)count++;
      }
      m[i]=count;
     }
     priority_queue<pair<int,int>>pq;
     for(auto &a:m){
        pq.push({a.second,a.first});
        if(pq.size()>k)pq.pop();
     }   
     vector<int>ans;
     while(pq.size()){
        ans.push_back(pq.top().second);
        pq.pop();
     }
     reverse(ans.begin(),ans.end());
     return ans;
    }
};