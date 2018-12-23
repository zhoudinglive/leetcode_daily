#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    void moveZeroes(vector<int> &nums) {
        int cnt = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] != 0) {
                 nums[cnt++] = nums[i];
            }
        }
        for(; cnt < nums.size(); ++cnt) {
            nums[cnt] = 0;
        }
    }
};