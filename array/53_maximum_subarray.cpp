#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    int maxSubArray(vector<int> &nums) {
        int max_sum = INT_MIN;
        int now_sum = 0;
        for(int i = 0; i < nums.size(); ++i) {
            now_sum += nums[i];
            max_sum = max(now_sum, max_sum);
            if(now_sum < 0) {
                now_sum = 0;
            }
        }
        return max_sum;
    }
};