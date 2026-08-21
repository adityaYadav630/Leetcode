class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(char c:s){
          m1[c]++;
        }
        for(char c:t){
            m2[c]++;
        }
        int ans=0;
        for(char c:s){
         if(m1[c]>m2[c]){
            ans+=m1[c]-m2[c];
            m2[c]=m1[c];
         }   
        }
        return ans;
    }
};