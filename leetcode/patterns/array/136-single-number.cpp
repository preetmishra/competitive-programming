class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(auto itr = nums.begin(); itr != nums.end(); itr++)
            ans ^= *itr;
        return ans;
    }
};
