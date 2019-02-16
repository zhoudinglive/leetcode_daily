#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define maxn 10005

class Solution {
  public:
    int repeatedNTimes(vector<int> &A) {
        int len = A.size();
        int cnt[maxn];
        memset(cnt, 0, sizeof(cnt));
        for(int i = 0; i < len; ++i) {
            cnt[A[i]] += 1;
        }
        for(int i = 0; i < maxn; ++i) {
            if(cnt[i] == len / 2) {
                return i;
            }
        }
        return 0;
    }
};