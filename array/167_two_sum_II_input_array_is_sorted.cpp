#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> ans;
        int start = 0, end = numbers.size() - 1;
        while(start < end) {
            if(target == numbers[start] + numbers[end]) {
                ans.push_back(start + 1);
                ans.push_back(end + 1);
                return ans;
            }
            if(target - numbers[start] < numbers[end]) {
                end--;
            } else if(target - numbers[end] > numbers[start]) {
                start++;
            }
        }
    }
};