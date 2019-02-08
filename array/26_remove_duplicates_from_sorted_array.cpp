#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    int removeDuplicates(vector<int> &nums) {
        if(nums.size() == 0) {
            return 0;
        }

        int len = 1, last = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            if(nums[i] != last) {
                nums[len] = nums[i];
                last = nums[len];
                len += 1;
            }
        }
        return len;
    }
};