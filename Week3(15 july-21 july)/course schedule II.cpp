class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);
        vector<int> in(n,0);
        for(vector<int> c:pre){
            adj[c[1]].push_back(c[0]);
            in[c[0]]++;
        }
        vector<int> ans;
        queue<int> q;
        for(int i=0;i<in.size();i++){
            if(in[i]==0) q.push(i);
        }
        while(!q.empty()){
            int x=q.front();
            q.pop();
            ans.push_back(x);
            for(int j=0;j<adj[x].size();j++){
                in[adj[x][j]]--;
                if(in[adj[x][j]]==0) q.push(adj[x][j]);
            }
        }
        if(ans.size()!=n) return vector<int>();
        else return ans;
    }
};