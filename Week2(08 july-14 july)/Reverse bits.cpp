class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        uint32_t ans = 0;
        for (int i=0;i<=31;i++) ans += (n & (1<<i)) ? 1<<(31-i) : 0; 
        return ans;
    }
};
