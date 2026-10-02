class Solution {
public:
    string originalDigits(string s) {
     vector<int>freq(26,0);
     for(auto a:s){
        freq[a-'a']++;
     }   
     string ans="";

     if(freq['z'-'a']){
        int count=freq['z'-'a'];
        ans += string(count,'0');
        freq['z'-'a']-=count;
        freq['e'-'a']-=count;
        freq['r'-'a']-=count;
        freq['o'-'a']-=count;
     }

    if(freq['w'-'a']){
        int count=freq['w'-'a'];
        ans += string(count,'2');
        freq['t'-'a']-=count;
        freq['w'-'a']-=count;
        freq['o'-'a']-=count;
     }
     
     if(freq['u'-'a']){
        int count=freq['u'-'a'];
        ans += string(count,'4');
        freq['u'-'a']-=count;
        freq['f'-'a']-=count;
        freq['r'-'a']-=count;
        freq['o'-'a']-=count;
     }
     
     if(freq['x'-'a']){
        int count=freq['x'-'a'];
        ans += string(count,'6');
        freq['s'-'a']-=count;
        freq['i'-'a']-=count;
        freq['x'-'a']-=count;
     }
     
     if(freq['g'-'a']){
        int count=freq['g'-'a'];
        ans += string(count,'8');
        freq['g'-'a']-=count;
        freq['e'-'a']-=count;
        freq['i'-'a']-=count;
        freq['h'-'a']-=count;
        freq['t'-'a']-=count;
     }
     
     if(freq['h'-'a']){
        int count=freq['h'-'a'];
        ans += string(count,'3');
        freq['t'-'a']-=count;
        freq['h'-'a']-=count;
        freq['r'-'a']-=count;
        freq['e'-'a']-=count;
        freq['e'-'a']-=count;
     }
     
     if(freq['f'-'a']){
        int count=freq['f'-'a'];
        ans += string(count,'5');
        freq['f'-'a']-=count;
        freq['i'-'a']-=count;
        freq['v'-'a']-=count;
        freq['e'-'a']-=count;
     }
     
     if(freq['s'-'a']){
        int count=freq['s'-'a'];
        ans += string(count,'7');
        freq['s'-'a']-=count;
        freq['e'-'a']-=count;
        freq['v'-'a']-=count;
        freq['e'-'a']-=count;
        freq['n'-'a']-=count;
     }
     
     if(freq['o'-'a']){
        int count=freq['o'-'a'];
        ans += string(count,'1');
        freq['o'-'a']-=count;
        freq['n'-'a']-=count;
        freq['e'-'a']-=count;
     }

     if(freq['i'-'a']){
        int count=freq['i'-'a'];
        ans += string(count,'9');
        freq['n'-'a']-=count;
        freq['i'-'a']-=count;
        freq['n'-'a']-=count;
        freq['e'-'a']-=count;
     }
     sort(ans.begin(),ans.end());
   return ans;
    }
};