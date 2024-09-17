#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>& nums, int target) {
    int i = 0, j = nums.size()-1;
    vector<int> ans;

    while (i < j) {
        if (nums[i] + nums[j] > target)     j--;
        else if (nums[i] + nums[j] < target)      i++;
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}