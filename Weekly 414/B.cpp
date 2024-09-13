#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isValid(const vector<int>& start, int d, long long minDiff, int n) {
        long long prev = start[0]; // Take the first element
        
        for (int i = 1; i < n; ++i) {
            if (start[i] + d >= prev + minDiff) {
                prev = max(prev + minDiff, (long long)start[i]); // Update the last placed element
            } else {
                return false;
            }
        }
        return true;
    }

    int maxPossibleScore(vector<int>& start, int d) {
        sort(start.begin(), start.end());
        int n = start.size();
        long long left = 0, right = (long long)(start[n - 1] + d - start[0]) + 1; // Use long long to avoid overflow

        while (left < right) {
            long long mid = left + (right - left) / 2;
            if (isValid(start, d, mid, n)) {
                left = mid + 1; // Try to increase the minimum difference
            } else {
                right = mid; // Try smaller
            }
        }
        return (int)(left - 1); // Convert result back to int
    }
};

