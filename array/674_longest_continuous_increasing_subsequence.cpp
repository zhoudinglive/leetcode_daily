#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define maxn 10005

class Solution {
  public:
    int findLengthOfLCIS(vector<int> &nums) {
        int dp[maxn];
        for(int i = 0; i < nums.size(); ++i) {
            dp[i] = 1;
        }
        
        for(int i = 1; i < nums.size(); ++i) {
            if(nums[i] > nums[i - 1]) {
                dp[i] = dp[i - 1] + 1;
            }
        }

        int ans = -1;
        for(int i = 0; i < nums.size(); ++i) {
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};