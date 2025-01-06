#include <numeric>

class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size(), maxLen = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                long long prod = 1, lcmVal = 1;
                int gcdVal = 0;
                bool valid = true;
                for (int k = i; k <= j; ++k) {
                    if (prod > 1e18 / nums[k]) {
                        valid = false;
                        break;
                    }
                    prod *= nums[k];
                    gcdVal = gcd(gcdVal, nums[k]);
                    lcmVal = (lcmVal / gcd(lcmVal, nums[k])) * nums[k];
                }
                if (valid && prod == gcdVal * lcmVal) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }
        return maxLen;
    }
};

