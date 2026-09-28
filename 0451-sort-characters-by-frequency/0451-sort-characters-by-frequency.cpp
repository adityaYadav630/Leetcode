class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(char &a:s){
            m[a]++;

        }
        priority_queue<pair<int,char>>pq;
        for(auto &a:m){
        pq.push({a.second,a.first});
        }
        string ans="";
        while(pq.size()){
            auto a=pq.top();
            pq.pop();
            while(a.first){
                ans.push_back(a.second);
                a.first--;
            }
        }
        return ans;
    }
};