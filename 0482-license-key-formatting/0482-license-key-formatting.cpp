class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
     string temp="";
     for(char ch:s){
        if(ch!='-')temp.push_back(ch);
     }   
     int first=temp.size()%k;
     string ans="";
     int i=0;
     if(first!=0){
     while(i<first){
      if(temp[i]>='a'&&temp[i]<='z')
      ans.push_back(temp[i]-32);
      else ans.push_back(temp[i]);        
        i++;
     }
     if(i<temp.size()-1)
     ans.push_back('-');
     }
     int count=0;
     while(i<temp.size()){
      if(count==k){
        count=0;
        ans.push_back('-');
      }
      if(temp[i]>='a'&&temp[i]<='z')
      ans.push_back(temp[i]-32);
      else ans.push_back(temp[i]);
      i++;
      count++;
     }
     return ans;
    }
};