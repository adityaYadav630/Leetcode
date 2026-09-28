class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>ans;
        unordered_map<string,int>m;
        for(auto &a:words){
            m[a]++;
        }
        auto cmp=[](pair<int,string>&a,pair<int,string>&b){
        if(a.first==b.first)return a.second<b.second;
        else return a.first>b.first;
       };
       priority_queue<pair<int,string>,vector<pair<int,string>>,decltype(cmp)>pq;
       for(auto a:m){
        pq.push({a.second,a.first});
        if(pq.size()>k)pq.pop();
       }
       while(pq.size()){
        ans.push_back(pq.top().second);
        pq.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};