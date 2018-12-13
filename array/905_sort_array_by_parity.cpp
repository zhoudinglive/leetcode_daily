#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a, int b) {
	return (a % 2) < (b % 2);
}

class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) {	
		sort(A.begin(), A.end(), cmp);
        	return A;
	}
};
