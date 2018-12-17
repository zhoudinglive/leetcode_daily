#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution{
  public:
    bool isToeplitzMatrix(vector<vector<int> > &matrix) {
        for(int i = 0; i < matrix.size(); ++i) {
            if(i == 0) {
                for(int j = 0; j < matrix[i].size(); ++j) {
                    bool flag = sub_check(matrix, i, j);
                    if(!flag) {
                        return flase;
                    }
                }
            } else {
                bool flag = sub_check(matrix, i, 0);
                if(!flag) {
                    return false;
                }
            }
        }
        return true;
    }

    bool sub_check(vector<vector<int> > &matrix, int x, int y) {
        int row_len = matrix.size();
        int column_len = matrix[0].size();
        int start = matrix[x][y];

        while(x < row_len && y < column_len) {
            if(start != matrix[x][y]) {
                return false;
            } else {
                x += 1;
                y += 1;
            }
        }
        return true;
    }
};