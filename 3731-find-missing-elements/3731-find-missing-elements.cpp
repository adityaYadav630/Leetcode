class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
    if(nums.size()==0)return vector<int>{};
    unordered_set<int>s;
    int Min=nums[0];
    int Max=nums[0];
    for(int x:nums){
    Min=min(Min,x);
    Max=max(Max,x);
    s.insert(x);
    }
    vector<int>ans;
    for(int i=Min;i<=Max;i++){
        if(!s.count(i))ans.push_back(i);
    }
    return ans;
    }
};