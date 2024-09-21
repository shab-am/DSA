// LeetCode problem 11: Container with most water

// Brute-force approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int n = height.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int width = j - i;
                int ht = min(height[i], height[j]);
                int area = width * ht;
                maxWater = max(maxWater, area);
            }
        }
        return maxWater;
    }
};

// Optimal approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxWater = 0;
        int left = 0, right = n - 1;
        while (left < right) {
            int width = right - left;
            int ht = min(height[left], height[right]);
            int curWater = width * ht;
            maxWater = max(maxWater, curWater);
            
            (height[left] < height[right]) ? left++ : right--;
        }
        return maxWater;
    }
};