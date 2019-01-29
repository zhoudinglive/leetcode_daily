#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> getRow(int rowIndex) {
        vector<int> last_row;
        vector<int> now_row;

        for(int i = 0; i < rowIndex + 1; ++i) {
            now_row.clear();
            now_row.push_back(1);
            if(i != 0) {
                for(int j = 0; j < i - 1; ++j) {
                    now_row.push_back(last_row[j] + last_row[j + 1]);
                }
                now_row.push_back(1);
            }
            last_row.clear();
            for(int k = 0; k < now_row.size(); ++k) {
                last_row.push_back(now_row[k]);
            }
        }
        return last_row;
    }
};