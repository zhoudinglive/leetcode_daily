#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
using namespace std;

class Solution {
  public:
    int distributeCandies(vector<int> &candies) {
        set<int> candies_count;
        for(int i = 0; i < candies.size(); ++i) {
            candies_count.insert(candies[i]);
        }

        return min(candies.size() / 2, candies_count.size());
    }
};