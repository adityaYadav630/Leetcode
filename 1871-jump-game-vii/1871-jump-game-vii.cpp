class Solution {
public:
    bool solve (string &s,int i,int minJump,int maxJump,vector<bool>&visited,int&far){
        if(i==s.size()-1)return true;
        visited[i]=true;
        int end=min(i+maxJump,int(s.size())-1);
        for(int j=max(i+minJump,far+1);j<=end;j++){
            if(s[j]=='0'&&visited[j]==false){
            if(solve(s,j,minJump,maxJump,visited,far))return true;
        }
        }
         far=max(far,end);
        return false;
    }
    bool canReach(string s, int minJump, int maxJump) {
        vector<bool>visited(s.size(),false);
        int far=0;
        queue<int>q;
        q.push(0);
        visited[0]=true;
        while(q.size()){
            int first=q.front();
            q.pop();
            if(first==s.size()-1)return true;
            for(int i=max(far+1,first+minJump);i<=min(first+maxJump,int(s.size())-1);i++){
                if(!visited[i]&&s[i]=='0'){q.push(i);
                visited[i]=true;
                }
            }
            far=max(far,min(first+maxJump,int(s.size())-1));
        }
        return false;
    }
};