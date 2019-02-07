/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 *
 * https://leetcode.com/problems/median-of-two-sorted-arrays/description/
 *
 * algorithms
 * Hard (25.28%)
 * Total Accepted:    372.3K
 * Total Submissions: 1.5M
 * Testcase Example:  '[1,3]\n[2]'
 *
 * There are two sorted arrays nums1 and nums2 of size m and n respectively.
 * 
 * Find the median of the two sorted arrays. The overall run time complexity
 * should be O(log (m+n)).
 * 
 * You may assume nums1 and nums2 cannot be both empty.
 * 
 * Example 1:
 * 
 * 
 * nums1 = [1, 3]
 * nums2 = [2]
 * 
 * The median is 2.0
 * 
 * 
 * Example 2:
 * 
 * 
 * nums1 = [1, 2]
 * nums2 = [3, 4]
 * 
 * The median is (2 + 3)/2 = 2.5
 * 
 * 
 */

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        for(int i = 0; i < nums1.size(); ++i) {
            nums.push_back(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); ++i) {
            nums.push_back(nums2[i]);
        }
        sort(nums.begin(), nums.end());

        int len = nums.size();
        if(len % 2 == 0) {
            return double(nums[len / 2] + nums[len / 2 - 1]) / 2.0;
        } else {
            return double(nums[len / 2]);
        }
    }
};
