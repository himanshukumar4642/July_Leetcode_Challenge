class Solution {
public:
    int arrangeCoins(int n) {
        int cnt=0,k=1;
        while(n>0){
            if(n>=k)
                cnt++;
            n-=k;
            k++;
        }
        return cnt;
    }
};
