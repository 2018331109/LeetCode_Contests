class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return -1; // Cannot form a mountain triplet with less than 3 elements.
        }

        vector<int> leftMin(n, INT_MAX);
        vector<int> rightMin(n, INT_MAX);

        // Precompute the minimum elements on the left and right of each index.
        for (int i = 1; i < n; i++) {
            leftMin[i] = min(leftMin[i - 1], nums[i - 1]);
        }
        for (int i = n - 2; i >= 0; i--) {
            rightMin[i] = min(rightMin[i + 1], nums[i + 1]);
        }

        int minSum = INT_MAX;

        for (int j = 1; j < n - 1; j++) {
            if (nums[j] > leftMin[j] && nums[j] > rightMin[j]) {
                int currentSum = leftMin[j] + nums[j] + rightMin[j];
                minSum = min(minSum, currentSum);
            }
        }

        return minSum == INT_MAX ? -1 : minSum;
    }
};
