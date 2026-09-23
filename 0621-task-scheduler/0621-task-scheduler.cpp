class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
     unordered_map<char,int>m;
     for(auto a:tasks){
        m[a]++;
     }   
     priority_queue<int>pq;
     for(auto a:m){
        pq.push(a.second);
     }
    queue<pair<int,int>>q;
     int ans=0;
     while(q.size()||pq.size()){
      if(q.size()&&q.front().second==ans){
        pq.push(q.front().first);
        q.pop();
      }
      if(pq.size()){
        int f=pq.top();
        f--;
        if(f>0)q.push({f,ans+n+1});
        pq.pop();
      }
      ans++;
     }
     return ans;
    }
};