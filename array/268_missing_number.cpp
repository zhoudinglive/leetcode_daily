#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    int missingNumber(vector<int> &nums) {
        int re = 0;
        for(int i = 0; i < nums.size() - 1; ++i) {
            re += nums[i] - i - 1;
        }
        return abs(re);
    }
};