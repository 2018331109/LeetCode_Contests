class Solution {
public:
    int minMaxSums(vector<int>& nums, int k) {
        const int MOD = 1e9 + 7;
        int n = nums.size();
        long long result = 0;

        for (int subset = 1; subset < (1 << n); ++subset) { // Iterate over all subsets
            int count = 0, minVal = INT_MAX, maxVal = INT_MIN;

            for (int i = 0; i < n; ++i) {
                if (subset & (1 << i)) { // Check if the i-th element is in the subset
                    ++count;
                    minVal = min(minVal, nums[i]);
                    maxVal = max(maxVal, nums[i]);
                }
            }

            if (count <= k) { // Only consider subsets with size <= k
                result = (result + minVal + maxVal) % MOD;
            }
        }

        return result;
    }
};

