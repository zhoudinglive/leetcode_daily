#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    int islandPerimeter(vector<vector<int> > &grid) {
        int axis_move[5] = {0, -1, 0, 1, 0};
        
        int sum = 0, new_i, new_j;
        int height = grid.size();
        int width = grid[0].size();
        for(int i = 0; i < height; ++i) {
            for(int j = 0; j < width; ++j) {
                if(grid[i][j] == 1) {
                    sum += 4;
                    for (int k = 1; k < 5; ++k) {
                        new_i = i + axis_move[k - 1];
                        new_j = j + axis_move[k];

                        if (new_i < height && new_i >= 0 && new_j < width && new_j >= 0) {
                            if (grid[new_i][new_j] == 1){
                                sum -= 1;
                            }
                        }
                    }
                }
            }
        }
        return sum;
    }
};