#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<string> findWords(vector<string> &words) {
        vector<char> v1, v2, v3;
        v1 = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        v2 = {'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        v3 = {'Z', 'X', 'C', 'V', 'B', 'N', 'M', 'z', 'x', 'c', 'v', 'b', 'n', 'm'};

        vector<string> ans;
        int f1 = 0, f2 = 0, f3 = 0;
        for(int i = 0; i < words.size(); ++i) {
            for(int j = 0; j < words[i].length(); ++j) {
                if(find(v1.begin(), v1.end(), words[i][j]) != v1.end()) {
                    f1 += 1;
                } else if(find(v2.begin(), v2.end(), words[i][j]) != v2.end()) {
                    f2 += 1;
                } else if(find(v3.begin(), v3.end(), words[i][j]) != v3.end()) {
                    f3 += 1;
                }
            }

            if (f1 == words[i].length() || f2 == words[i].length() || f3 == words[i].length()) {
                ans.push_back(words[i]);
            } 
            f1 = 0; f2 = 0; f3 = 0;
        }
        return ans;
    }
};