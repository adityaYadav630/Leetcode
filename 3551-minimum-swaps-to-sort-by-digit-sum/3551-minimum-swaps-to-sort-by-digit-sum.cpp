class Solution {
public:
  int Sum(int d){
    int ans=0;
    while(d){
        ans+=(d%10);
        d/=10;
    }
    return ans;
  }
    int minSwaps(vector<int>& nums) {
     vector<int>vec(nums);
     sort(vec.begin(),vec.end(),[&](int a,int b){
      int as=Sum(a);
      int bs=Sum(b);
      if(as==bs){
        return a<b;
      }else return as<bs;
     });
      unordered_map<int,int>m;
      for(int i=0;i<nums.size();i++){
        m[nums[i]]=i;
      }
      int ans=0;
      for(int i=0;i<nums.size();i++){
        int curr=nums[i];
        int expt=vec[i];
        if(curr==expt)continue;
        int idx=m[expt];
        nums[i]=expt;
        nums[idx]=curr;
        m[expt]=i;
        m[curr]=idx;
        ans++;
      }
      return ans;
    }
};