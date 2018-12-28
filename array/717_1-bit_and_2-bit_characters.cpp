#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    bool isOneBitCharacter(vector<int> &bits) {
        if(bits.size() == 1 || bits[bits.size() - 2] == 0) {
            return true;
        } else {
            int flag = -1;
            for(int i = 0; i < bits.size(); ++i) {
                if(bits[i]) {
                    i++;
                    flag = 0;
                } else {
                    flag = 1;
                }
            }
            return flag;
        }
    }
};