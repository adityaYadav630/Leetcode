class Solution {
public:
  bool check(unordered_map<int,int>&m){
    for(auto &a:m){
        if(a.second>1)return false;
    }
    return true;
  }
    int minimumOperations(vector<int>& nums) {
       unordered_map<int,int>m;
       for(auto a:nums){
        m[a]++;
       } 
       int ans=0;
       for(int i=0;i<nums.size();i+=3){
       if(check(m))return ans;
       for(int j=i;j<i+3&&j<nums.size();j++){
        m[nums[j]]--;
       }
       ans++;
       }
       return ans;
    }
};