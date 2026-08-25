class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
    unordered_set<int>s;
    for(int i:nums){
        s.insert(i);
    }   
    for(int i=1;;i++){
      if(!s.count(k*i)){
        return k*i;
      }
    }
    }
};