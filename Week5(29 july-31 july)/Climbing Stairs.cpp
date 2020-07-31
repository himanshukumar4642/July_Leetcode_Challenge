class Solution {
public:
    //We are using dp because there are overlapping subproblems and we need to store the already computed tasks to avoid useless recursive calls
    int climbStairs(int n) {
        ios_base::sync_with_stdio(0);cin.tie(0);
        if(n==0)//if there are no steps to climb, return 0
            return 0;
        if(n==1)//if there is only 1 step return 1
            return 1;
        int dp[n+1];//dp[n] will be the required answer,so we made size of dp as n+1;
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            /*there are two options when we reach ith step:
            1.we came from (i-1)th step
            2.we came from (i-2)th step*/
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        //Please upvote if you find the explaination helpful in any way.
    }
};