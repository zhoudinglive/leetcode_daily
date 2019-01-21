#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    int minCostClimbingStairs(vector<int> &cost) {
        int dp[1005];
        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i = 2; i < cost.size(); ++i) {
            dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
        }
        return min(dp[cost.size() - 1], dp[cost.size() - 2]);
    }
};


int main() {
    int a[] = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    vector<int> va(a, a + 10);
    Solution s;
    cout << s.minCostClimbingStairs(va) << endl;  
}