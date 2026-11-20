class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // Start from the second element and accumulate the sum in-place
        for (int i = 1; i < nums.size(); ++i) {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};