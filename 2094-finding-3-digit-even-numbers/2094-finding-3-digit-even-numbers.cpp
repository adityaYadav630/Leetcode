class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
          vector<int>ans;
       unordered_set<int>s;
       for(int i=0;i<digits.size();i++){
        for(int j=0;j<digits.size();j++){
        for(int k=0;k<digits.size();k++){
            if(i==j||j==k||k==i||digits[i]==0){
                continue;
            }
            int num=digits[i]*100+digits[j]*10+digits[k];
               if(num%2==0&&!s.count(num))ans.push_back(num);
               s.insert(num);         
            }
        }
       }
       sort(ans.begin(),ans.end());
       return ans;
    }
};