class Solution {
public:
    int nthUglyNumber(int n) {
        if(n==1) return 1;
        int x=0,y=0,z=0;
        vector<int> dp;
        dp.push_back(1);
        int i=1;
        while(i<n){
            dp.push_back(min({2*dp[x],3*dp[y],5*dp[z]}));
            if(dp[i]==2*dp[x]) x++;
            if(dp[i]==3*dp[y]) y++;
            if(dp[i]==5*dp[z]) z++;
            i++;
        }
        return dp[n-1];
    }
};
