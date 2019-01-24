#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > ans;

        for(int i = 0; i < numRows; ++i) {
            vector<int> now;
            now.push_back(1);
            if(i == 0) {
                ans.push_back(now);
                continue;
            } else {
                int len = ans[i - 1].size();
                for(int k = 0; k < len; ++k) {
                    if(k + 1 < len) {
                        now.push_back(ans[i - 1][k] + ans[i - 1][k + 1]);
                    }
                }
                now.push_back(1);
                ans.push_back(now);
            }
        }
        return ans;
    }
};
