#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define maxn 10005

class Solution {
  public:
    bool hasGroupsSizeX(vector<int> &deck) {
        if(deck.size() < 2) {
            return false;
        }

        int hash[maxn], max_num = -1;
        memset(hash, 0, sizeof(hash));

        for(int i = 0; i < deck.size(); ++i) {
            hash[deck[i]] += 1;
            max_num = max(hash[deck[i]], max_num);
        }

        
        for(int i = 2; i <= max_num; ++i) {
            bool success = true;
            for(int j = 0; j < maxn; ++j) {
                if(hash[j] > 0 && hash[j] % i != 0) {
                    success = false;
                    break;
                }
            }
            if(success){
                return true;
            }
        }
        return false;
    }
};