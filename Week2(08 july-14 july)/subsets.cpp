class Solution {
public:
    vector<int> solve(int x,vector<int> nums){
        int k=0;
        vector<int> ans;
        while(x){
            if(x&1) ans.push_back(nums[k]);
            k++;
            x>>=1;
        }
        return ans;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        int rs=1<<n;
        for(int i=0;i<rs;i++){
            vector<int> temp=solve(i,nums);
            res.push_back(temp);
        }
        return res;
    }
};
