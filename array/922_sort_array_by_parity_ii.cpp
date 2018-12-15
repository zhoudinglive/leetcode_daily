#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define maxn 20005

class Solution {
  public:
    vector<int> sortArrayByParityII(vector<int> &A) {
        int array[maxn];
        int odd = 1, even = 0;

        for (int i = 0; i < A.size(); ++i) {
            if (A[i] % 2 == 0) {
                array[even] = A[i];
                even += 2;
            } else {
                array[odd] = A[i];
                odd += 2;
            }
        }

        vector<int> v;
        for (int i = 0; i < A.size(); ++i) {
            v.push_back(array[i]);
        }
        return v;
    }
};

int main() {

}