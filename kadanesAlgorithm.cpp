//LeetCode Problem - 53: Maximum Subarray Sum (Kadane's Algorithm)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) return -1;
        int curSum = 0, maxSum = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            curSum += nums[i];
            maxSum = max(curSum, maxSum);
            if (curSum < 0) curSum = 0;
        }
        return maxSum;
    }
};