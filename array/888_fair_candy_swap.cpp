#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> fairCandySwap(vector<int> &A, vector<int> &B) {
        int sumA = getSum(A), sumB = getSum(B);
        int divide = abs(sumA - sumB) / 2;
        cout << sumA << endl;
        cout << sumB << endl;
        cout << divide << endl;

        vector<int> ans;
        for(int i = 0; i < A.size(); ++i) {
            for(int j = 0; j < B.size(); ++j) {
                if (abs(A[i] - B[j]) == divide) {
                    cout << A[i] << endl;
                    cout << B[j] << endl;
                    if((sumA > sumB && A[i] > B[j]) || (sumA < sumB && A[i] < B[j])) {
                        ans.push_back(A[i]);
                        ans.push_back(B[j]);
                        return ans;
                    }
                }
            }
        }
        return ans;
    }

    int getSum(vector<int> &vec) {
        int sum = 0;
        for(int i = 0; i < vec.size(); ++i) {
            sum += vec[i];
        }
        return sum;
    }
};

int main() {
    int a[] = {19677, 5766, 45559, 21609, 20786, 23897, 41907, 46730, 5074, 16585, 22316, 45542, 32931, 38930, 30902, 25970, 9399, 22243, 12448, 46365, 27736, 37956, 34793, 1789, 9482, 32684, 33197, 10164, 44579, 4164, 18752, 9014, 29909, 23034, 39646, 16564, 49479, 48043, 2085, 2245, 36748, 36357, 32799, 24760, 20028, 17488, 10532, 30551, 24160, 4306, 36866, 11451, 37545, 36589, 19721, 45085, 35058, 3209, 20970, 17635, 3765, 45025, 34918, 20482, 11200, 25311, 46391, 48382, 24783, 24601, 990, 23106, 5396, 23003, 26025, 6760, 38287, 49890, 33279, 25114, 875, 17117, 45162, 34184, 34980, 29541, 7966, 22111, 19275, 11872, 24456, 38690, 13255, 20660, 40457, 38215, 49164, 35456, 1304, 15664};
    int b[] = {21694, 96930, 39481, 92495, 2348, 6914, 34746, 31494, 55428, 3715, 96504, 70815, 90914, 60492, 17259, 5338, 55495, 94488, 7843, 2591, 39828, 50908, 79838, 39004, 4140, 37641, 94042, 26667, 47755, 44696, 75336, 66328, 39694, 22632, 11248, 63030, 74954, 60174, 98886, 28422, 67339, 52991, 83250, 62568, 81423, 84448, 95464, 47774, 77765, 71996};
    vector<int> va(a, a + sizeof(a) / sizeof(a[0]));
    vector<int> vb(b, b + sizeof(b) / sizeof(b[0]));

    Solution s;
    s.fairCandySwap(va, vb);
}