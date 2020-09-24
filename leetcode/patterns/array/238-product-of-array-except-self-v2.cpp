class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        int right_product = 1;
        vector<int> result(len, 1);

        for(int i = 1; i < len; i++)
            result[i] = result[i - 1] * nums[i - 1];

        for(int i = len - 1; i > -1; i--){
            result[i] *= right_product;
            right_product *= nums[i];
        }
        return result;
    }
};
