//LeetCode problem - 136: Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 0) return -1;
        int ans = 0;
        for(int val: nums) {
            ans = ans ^ val;
        }
        return ans;
    }
};