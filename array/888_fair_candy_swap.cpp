#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> fairCandySwap(vector<int> &A, vector<int> &B) {
        int sumA = getSum(A), sumB = getSum(B);
        int divide = abs(sumA - sumB) / 2;

        vector<int> ans;
        for(int i = 0; i < A.size(); ++i) {
            for(int j = 0; j < B.size(); ++j) {
                if (abs(A[i] - B[j]) == divide) {
                    if((sumA > sumB && A[i] > B[j]) || (sumA < sumB && A[i] < B[j])) {
                        ans.push_back(A[i]);
                        ans.push_back(B[j]);
                        return ans;
                    }
                }
            }
        }
        return ans;
    }

    int getSum(vector<int> &vec) {
        int sum = 0;
        for(int i = 0; i < vec.size(); ++i) {
            sum += vec[i];
        }
        return sum;
    }
};
