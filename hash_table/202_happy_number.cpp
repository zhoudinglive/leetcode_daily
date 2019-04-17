#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
  public:
    bool isHappy(int n) {
        vector<int> see;

        int now_n = n;
        while(true) {
            int new_n = 0;
            while(now_n) {
                new_n += (now_n % 10) * (now_n % 10);
                now_n /= 10;
            } 
            if(new_n == 1) {
                return true;
            } else {
                bool flag = false;
                for(int i = 0; i < see.size(); ++i) {
                    if(new_n == see[i]) {
                        flag = true;
                        break;
                    }
                }
                if(flag) {
                    return false;
                } else {
                    see.push_back(new_n);
                    now_n = new_n;
                }
            }
        }
    }
};