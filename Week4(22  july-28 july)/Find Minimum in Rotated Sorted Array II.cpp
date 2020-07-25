class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0;
        while(i<nums.size()-1&&nums[i]<=nums[i+1])
            i++;
        return i==nums.size()-1?nums[0]:nums[i+1];
    }
};