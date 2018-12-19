#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<vector<int> > matrixReshape(vector<vector<int> > &nums, int r, int c) {
        int r_o = nums.size();
        int c_o = nums[0].size();

        if(r_o * c_o != r * c || (r_o == r && c_o == c)) {
            return nums;
        } else {
            vector<vector<int> > ans(r, vector<int>(c, 0));

            int cnt = 0, x = -1, y = 0;
            for(int i = 0; i < r_o; ++i) {
                for(int j = 0; j < c_o; ++j) {
                    if(cnt % c == 0) {
                        x += 1;
                        y = 0;
                    } 
                    ans[x][y] = nums[i][j];
                    y += 1; cnt += 1;
                }
            }
            return ans;
        }
    }
};

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4};

    vector<int> v_a(a, a + 4);
    // vector<int> v_b(b, b + 2);
    vector<vector<int> > v;
    v.push_back(v_a);
    // v.push_back(v_b);

    Solution s;
    vector<vector<int> > tmp = s.matrixReshape(v, 2, 2);
    cout << tmp.size();
    cout << tmp[0].size();
    // for(int i = 0; i < tmp.size(); ++i) {
    //     for(int j = 0; j < tmp[i].size(); ++j) {
    //         cout << tmp[i][j] << endl;
    //     }
    // }
}