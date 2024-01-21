#include <vector>

class Solution {
public:
    bool call(int a, int b) {
        int cnt1 = 0;
        while (a > 0) {
            if (a % 2) {
                cnt1++;
            }
            a /= 2;
        }
        int cnt2 = 0;
        while (b > 0) {
            if (b % 2) {
                cnt2++;
            }
            b /= 2;
        }

        return cnt1 == cnt2;
    }

    bool canSortArray(std::vector<int>& a) {
        int n = a.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    bool f = call(a[j], a[j + 1]);
                    if (!f) {
                        return false;
                    }
                    std::swap(a[j], a[j + 1]);
                }
            }
        }
        return true;
    }
};

