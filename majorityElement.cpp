//LeetCode problem - 169: Majority element

//Brute-force approach T(n) = O(n^2)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int freq = 0;
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] == nums[j])
                    freq++;                
            }
            if (freq > (nums.size())/2)
                return nums[i];
        }
        return -1;
    }
};

//Optimization using sorting technique T(n) = O(nlogn)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int freq = 1, ans = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i-1])   freq++;
            else {
                if (freq > n/2) return ans;
                freq = 1;
                ans = nums[i];
            }
        }
        return (freq > n/2) ? ans : -1;
    }
};

//Boyer-Moore Voting Algorithm T(n) = O(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(), count = 0, candidate = 0;
        for (int num : nums) {
            if (count == 0)     candidate = num;
            count += (num == candidate) ? 1 : -1;
        }
        
        count = 0;
        for (int num: nums) {
            if (num == candidate)
                count++;
        }
        return (count > n/2) ? candidate : -1;
    } 
};