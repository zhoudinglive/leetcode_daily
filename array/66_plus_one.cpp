#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> plusOne(vector<int> &digits) {
        int len = digits.size();

        vector<int> ans;
        for(int i = len - 1; i >= 0; --i) {
            digits[i] += 1;
            if(digits[i] < 10) {
                break;
            } else {
                digits[i] %= 10;
                if(i == 0) {
                    ans.push_back(1);
                }
            }
        }

        for(int i = 0; i < len; ++i) {
            ans.push_back(digits[i]);
        }
        return ans;
    }
};