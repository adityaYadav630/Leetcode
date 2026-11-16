class Solution {
public:
    string digitSum(string s, int k) {
        string str="";
        int sum=0;
        while(s.size()>k){
            str="";
        for(int i=0;i<s.size();i+=k){
            sum=0;

         for(int j=i;j<i+k&&j<s.size();j++){
            sum+=s[j]-'0';
            
         }
        str+=to_string(sum);
        }
        s=str;
        }
         return s;
    }
};