class Solution {
public:
    string rev(string a){
        string b=a;
        reverse(b.begin(),b.end());
        return b;
    }
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(rev(words[i])==words[j])ans++;
            }
        }
        return ans;
    }
};