class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return -1; // Cannot form a mountain triplet with less than 3 elements.
        }

        int minSum = INT_MAX;

        for (int j = 1; j < n - 1; j++) {
            int leftMin = INT_MAX;
            int rightMin = INT_MAX;

            // Find the minimum element on the left side of j.
            for (int i = 0; i < j; i++) {
                if (nums[i] < nums[j]) {
                    leftMin = min(leftMin, nums[i]);
                }
            }

            // Find the minimum element on the right side of j.
            for (int k = j + 1; k < n; k++) {
                if (nums[k] < nums[j]) {
                    rightMin = min(rightMin, nums[k]);
                }
            }

            // If valid mountain triplet is found, update the minimum sum.
            if (leftMin != INT_MAX && rightMin != INT_MAX) {
                int currentSum = leftMin + nums[j] + rightMin;
                minSum = min(minSum, currentSum);
            }
        }

        return minSum == INT_MAX ? -1 : minSum;
    }
};


