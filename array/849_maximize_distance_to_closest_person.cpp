// In a row of seats, 1 represents a person sitting in that seat, and0 represents that the seat is empty.
// There is at least one empty seat, and at least one person sitting.
// Alex wants to sit in the seat such that the distance between him and the closest person to him is maximized.
// Return that maximum distance to closest person.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    int maxDistToClosest(vector<int> &seats) {
        int dist = 0;
        int count = 0;
        bool firts_one = true;
        for (int i = 0; i < seats.size(); ++i) {
            if (seats[i] == 1) {
                if(firts_one && i > 0) {
                    dist = max(dist, count);
                } else {
                    dist = max(dist, (count + 1) / 2);
                }
                count = 0;
                firts_one = false;
            } else if (seats[i] == 0) {
                count += 1;
                if (i == seats.size() - 1) {
                    return max(dist, count);
                }
            }
        }
        return dist;
    }
};