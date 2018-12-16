#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<vector<int> > transpose(vector<vector<int> > &A) {
            int row = A.size(), column = A[0].size();
            vector<vector<int> > transpose(column, vector<int>(row, NULL));
            for(int i = 0; i < row; ++i) {
                for(int j = 0; j < column; ++j) {
                    if(i == 0) {
                        transpose[j].clear();
                    }
                    transpose[j].push_back(A[i][j]);
                }
            }
            return transpose;
        }
};

int main() {
    Solution s;
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    vector<int> v_a(a, a + 3);
    vector<int> v_b(b, b + 3);
    vector<vector<int> > v;
    v.push_back(v_a);
    v.push_back(v_b);
    s.transpose(v);
}