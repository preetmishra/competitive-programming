class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> left_products(len, 1);
        vector<int> right_products(len, 1);

        for(int i = 1; i < len; i++)
            left_products[i] = left_products[i - 1] * nums[i - 1];
        for(int i = len - 2; i > -1; i--)
            right_products[i] = right_products[i + 1] * nums[i + 1];

        vector<int> result;
        for(int i = 0; i < len; i++)
            result.push_back(left_products[i] * right_products[i]);
        return result;
    }
};
