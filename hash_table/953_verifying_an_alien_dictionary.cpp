#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

class Solution {
  public:
    bool isAlienSorted(vector<string> &words, string order) {
        if(words.size() == 0) {
            return true;
        }
        for(int i = 0; i < words.size() - 1; ++i) {
            string first = words[i];
            string second = words[i + 1];

            int k;
            bool found = false;
            for(k = 0; k < first.length() && k < second.length(); ++k) {
                if(first[k] != second[k]) {
                    found = true;
                    int index1 = order.find_first_of(first[k]);
                    int index2 = order.find_first_of(second[k]);
                    if(index1 > index2) {
                        return false;
                    }
                    break;
                }
            }
            if(!found) {
                if(k == second.length() && k != first.length()) {
                    return false;
                }
            }
        }
        return true;
    }
};