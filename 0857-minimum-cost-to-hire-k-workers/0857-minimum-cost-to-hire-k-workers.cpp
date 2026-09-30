class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        vector<pair<int,double>>ratios;
        for(int i=0;i<quality.size();i++){
            double r=(double)wage[i]/quality[i];
            ratios.push_back({i,r});
        }
        sort(ratios.begin(),ratios.end(),[](auto &a,auto &b){
            return a.second<b.second;
        });
        priority_queue<int>pq;
        double curr=0;
        double ans=DBL_MAX;
        for(auto [i,ratio]:ratios){
            pq.push(quality[i]);
            curr+=quality[i];
            if(pq.size()>k){
                  curr-=pq.top();              
                pq.pop();
            }
            if(pq.size()==k){
            ans=min(ans,ratio*curr);
            }
        }
        return ans;
    }
};