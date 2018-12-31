#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    int findShortestSubArray(vector<int> &nums) {
        int maxn = 50005;
        int flags[maxn], start[maxn], end[maxn];
        memset(flags, 0, sizeof(flags));
        memset(start, 0, sizeof(start));
        memset(end, 0, sizeof(end));

        int feq = -1, large = -1;
        for(int i = 0; i < nums.size(); ++i) {
            if(flags[nums[i]] == 0) {
                start[nums[i]] = i;
            }
            if(nums[i] > large) {
                large = nums[i];
            }
            end[nums[i]] = i;
            flags[nums[i]] += 1;
            if (flags[nums[i]] > feq) {
                feq = flags[nums[i]];
            }
        }

        int short_path = maxn;
        for(int i = 0; i <= large; ++i) {
            if(flags[i] == feq) {
                short_path = short_path > end[i] - start[i] ? end[i] - start[i] : short_path;
            }
        }
        return short_path;
    }
};