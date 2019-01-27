#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    int removeElement(vector<int> &nums, int val) {
        vector<int> nums_tmp;

        int cnt = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] != val) {
                cnt++;
                nums_tmp.push_back(nums[i]);
            }
        }
        nums = nums_tmp;
        return cnt;
    }
};