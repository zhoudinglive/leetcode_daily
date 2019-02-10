#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    bool validMountainArray(vector<int> &A) {
        if(A.size() < 3) {
            return false;
        }

        int inc = 0, dec = 0;
        for(int i = 1; i < A.size(); ++i) {
            if(A[i] > A[i - 1]) {
                inc += 1;
            } else {
                break;
            }
        }
        for(int i = A.size() - 1; i > 0; --i) {
            if(A[i] < A[i - 1]) {
                dec += 1;
            } else {
                break;
            }
        }
        return dec + inc + 1 == A.size() && dec != 0 && inc != 0 ? true : false;
    }
};