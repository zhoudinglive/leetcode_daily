// Given an array of integers nums, write a method that returns the "pivot" index of this array.
// We define the pivot index as the index where the sum of the numbers to the left of the index 
// is equal to the sum of the numbers to the right of the index.
// If no such index exists, we should return -1. If there are multiple pivot indexes, 
// you should return the left - most pivot index.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    int pivotIndex(vector<int> &nums) {
        vector<int> vec;
        int end_sum = 0;
        for(int i = nums.size() - 1; i >= 0; i--) {
            end_sum += nums[i];
            vec.push_back(end_sum);
        }

        int front_sum = 0;
        for(int i = 0; i < nums.size(); ++i) {
            front_sum += nums[i];
            if(front_sum == vec[nums.size() - 1 - i]) {
                return i;
            }
        }
        
        return -1;
    }
};
