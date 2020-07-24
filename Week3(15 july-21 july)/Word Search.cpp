class Solution {
public:
    bool dfs(vector<vector<char>> &b,int i,int j,int idx,string s){
        if(idx==s.length()) return true;
        if(i<0 || j<0 || i>=b.size() || j>=b[0].size() || s[idx]!=b[i][j] || b[i][j]=='#') return false;
        char ch=b[i][j];
        b[i][j]='#';
        bool ans=(dfs(b,i+1,j,idx+1,s) || dfs(b,i-1,j,idx+1,s) || dfs(b,i,j+1,idx+1,s) || dfs(b,i,j-1,idx+1,s));
        b[i][j]=ch;
        return ans;
    }
    bool exist(vector<vector<char>>& b, string s) {
        int n=b.size();
        int m=b[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(b[i][j]==s[0] && dfs(b,i,j,0,s)) return true;
            }
        }
        return false;
    }
};