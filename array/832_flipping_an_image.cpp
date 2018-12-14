#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<vector<int> > flipAndInvertImage(vector<vector<int> > &A) {
        vector<vector<int> > B;
        for (int i = 0; i < A.size(); ++i) {
            vector<int> C;
            for (int j = A[i].size() - 1; j >= 0; --j) {
                int num = A[i][j] == 1 ? 0 : 1;
                C.push_back(num);
            }
            B.push_back(C);
        }
        return B;
    }
};

int main() {
    Solution s;
    int a[3] = {1, 1, 0};
    int b[3] = {1, 0, 1};
    int c[3] = {0, 0, 0};

    vector<int> va(a, a + 3);
    vector<int> vb(b, b + 3);
    vector<int> vc(c, c + 3);
    vector<vector<int> > v;
    v.push_back(va);
    v.push_back(vb);
    v.push_back(vc);
    s.flipAndInvertImage(v);
    return 0;
}