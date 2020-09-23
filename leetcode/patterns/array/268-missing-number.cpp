class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int ans = len;
        for(int i = 0; i < len; i++)
            ans = ans ^ nums[i] ^ i;
        return ans;
    }
};