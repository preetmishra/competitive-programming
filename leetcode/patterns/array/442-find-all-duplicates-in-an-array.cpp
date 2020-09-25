class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;

        for(int i = 0; i < nums.size(); i++){
            int mark_idx = abs(nums[i]) - 1;

            if(nums[mark_idx] < 0)
                result.push_back(mark_idx + 1);
            else
                nums[mark_idx] = -nums[mark_idx];
        }

        return result;
    }
};
