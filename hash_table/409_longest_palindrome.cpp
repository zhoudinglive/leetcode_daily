#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Solution{
  public:
    int longestPalindrome(string s) {
        int maxn = 52;
        int ans[maxn];
        memset(ans, 0, sizeof(ans));

        for(int i = 0; i < s.length(); ++i) {
            if(s[i] < 91) {
                ans[s[i] - 65] += 1;
            } else {
                ans[s[i] - 71] += 1;
            }
        }

        int cnt = 0, odd = 0;
        for(int i = 0; i < maxn; ++i) {
            if(ans[i] % 2 == 0) {
                cnt += ans[i];
            } else {
                cnt += ans[i] - 1;
                odd += 1;
            }
        }
        return odd > 0 ? cnt + 1 : cnt;
    }
};
