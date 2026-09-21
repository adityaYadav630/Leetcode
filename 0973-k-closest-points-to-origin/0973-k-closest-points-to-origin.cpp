class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       priority_queue<pair<int,vector<int>>>p;
       for(auto &a:points){
        int dis=a[0]*a[0]+a[1]*a[1];
        p.push({dis,a});
        if(p.size()>k)p.pop();
       }
  
       vector<vector<int>>ans;
       while(p.size()){
        ans.push_back(p.top().second);
        p.pop();
       }
       return ans; 
    }
};