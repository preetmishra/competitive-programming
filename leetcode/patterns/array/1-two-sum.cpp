class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int idx1, idx2;
        unordered_map<int, int> indexes;
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(indexes.count(complement) != 0) {
                idx1 = indexes[complement];
                idx2 = i;
                break;
            }
            else
                indexes[nums[i]] = i;
        }
        vector<int> result = {idx1, idx2};
        return result;
    }
};
