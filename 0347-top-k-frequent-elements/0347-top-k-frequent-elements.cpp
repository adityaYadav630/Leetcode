class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto &a:nums){
            m[a]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        for(auto &a:m){
            p.push({a.second,a.first});
            if(p.size()>k)p.pop();
        }
        vector<int>ans;
        while(p.size()){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};