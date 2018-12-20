#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    bool isMonotonic(vector<int> &A) {
        if(A.size() == 1) {
            return true;
        }

        bool flag_ins = true;
        bool flag_dec = true;
        for(int i = 1; i < A.size(); ++i) {
            if(A[i] > A[i - 1]) {
                flag_dec = false;
            }
            if(A[i] < A[i - 1]) {
                flag_ins = false;
            }
        }
        return flag_ins || flag_dec;
    }
};
