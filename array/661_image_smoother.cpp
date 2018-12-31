#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<vector<int> > imageSmoother(vector<vector<int> > &M) {
        vector<vector<int> > ans(M.size(), vector<int>(M[0].size(), 0));
        int trans[10] = {-1, -1, 0, 0, -1, 1, 0, 1, 1, -1};
        for(int i = 0; i < M.size(); ++i) {
            for(int j = 0; j < M[i].size(); ++j) {
                int sum = 0, cnt = 0;
                for(int k = 0; k < 9; ++k) {
                    int i_trans = i + trans[k];
                    int j_trans = j + trans[k + 1];
                    if(i_trans >= 0 && i_trans < M.size() 
                                    && j_trans >= 0 && j_trans < M[i].size()) {
                        sum += M[i_trans][j_trans];
                        cnt += 1;
                    }
                }
                ans[i][j] = sum / cnt;
            }
        }
        return ans;
    }
};