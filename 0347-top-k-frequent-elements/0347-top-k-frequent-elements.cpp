class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto &a:nums){
            m[a]++;
        }
        priority_queue<pair<int,int>>p;
        for(auto &a:m){
            p.push({a.second,a.first});
        }
        vector<int>ans;
        for(int i=1;i<=k;i++){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};