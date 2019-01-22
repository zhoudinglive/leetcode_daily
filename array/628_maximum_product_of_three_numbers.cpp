#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    int maximumProduct(vector<int> &nums) {
        int len = nums.size() - 1;
        sort(nums.begin(), nums.end());
        return max(nums[len] * nums[len - 1] * nums[len - 2], nums[0] * nums[1] * nums[len]);
    }
};