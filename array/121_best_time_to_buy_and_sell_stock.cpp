#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    int maxProfit (vector<int> &prices) {
        int profit = 0;
        for(int i = 0; i < prices.size(); ++i) {
            for(int j = i; j < prices.size(); ++j) {
                if(prices[j] > prices[i]) {
                    int div = prices[j] - prices[i];
                    profit = div > profit ? div : profit;
                }
            }
        }
        return profit;
    }
};