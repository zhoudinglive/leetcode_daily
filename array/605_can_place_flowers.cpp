#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n) {
        vector<int> one_index;
        for (int i = 0; i < flowerbed.size(); ++i) {
            if (flowerbed[i] == 1) {
                one_index.push_back(i);
            }
        }
        
        int sum = 0, len = one_index.size();
        if(len > 0) {
            if(one_index[0] != 0) {
                sum += one_index[0] / 2;
            }
            if(one_index[len - 1] != flowerbed.size() - 1) {
                sum += (flowerbed.size() - one_index[len - 1] - 1) / 2;
            }
        } else {
            if(flowerbed.size() % 2 == 1) {
                return (flowerbed.size() + 1) / 2 >= n ? true : false;
            } else {
                return flowerbed.size() / 2 >= n ? true : false;
            }
        }

        for(int i = 1; i <len; ++i) {
            int div = one_index[i] - one_index[i - 1] - 1;
            if(div % 2 == 0) {
                sum += div / 2 - 1;
            } else {
                sum += div / 2;
            }
        }
        return sum >= n ? true : false;
    }
};