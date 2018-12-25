#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> findDisappearedNumbers(vector<int> &nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); ++i) {
            int val = abs(nums[i]) - 1;
            if(nums[val] > 0) {
                nums[val] = -nums[val];
            }
        }
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};