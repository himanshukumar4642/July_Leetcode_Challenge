class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=(int)prices.size();
        if(prices.empty())
            return 0;
        int dp[n][3];
        memset(dp,0,sizeof(dp));
        dp[0][0]=0;
        dp[0][1]=0;
        dp[0][2]=-prices[0];
        for(int i=1;i<n;i++){
            dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
            dp[i][1]=dp[i-1][2]+prices[i];
            dp[i][2]=max(dp[i-1][2],dp[i-1][0]-prices[i]);
        }
        int maxi=0;
        maxi=max(maxi,max(dp[n-1][1],dp[n-1][0]));
        maxi=max(maxi,dp[n-1][2]);
        return maxi;
    }
};