#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    double findMaxAverage(vector<int> &nums, int k) {
        for(int i = 1; i < nums.size(); ++i) {
            nums[i] += nums[i - 1];
        }

        double max = nums[k - 1];
        for(int i = k; i < nums.size(); ++i) {
            if(nums[i] - nums[i - k] > max) {
                max = nums[i] - nums[i - k];
            }
        }
        return max / k;
    }
};