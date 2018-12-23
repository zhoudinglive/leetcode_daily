#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        int maxn = -1, cnt = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] == 1) {
                cnt += 1;
            } else {
                cnt = 0;
            }
            maxn = cnt > maxn ? cnt : maxn;
        }
        return maxn;
    }
};