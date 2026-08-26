class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
      int l=0;
      int r=0;
      int count=0;
      string ans="";
      while(r<s.size()){
        if(s[r]=='1')count++;
            while(count>k){
                if(s[l]=='1')count--;
                l++;
            }    
            while(k==count&&s[l]=='0'){
            l++;
            }
         if(count==k){
            string curr=s.substr(l,r-l+1);
            if(ans==""||ans.size()>curr.size()||(ans.size()==curr.size()&&ans>curr)){
                ans=curr;
            }
         }
        r++;
      }
      return ans;  
    }
};