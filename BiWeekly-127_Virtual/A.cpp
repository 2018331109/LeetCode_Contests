class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MAX;
        for (int start = 0; start < n; ++start) {
            int total = 0;
            for (int end = start; end < n; ++end) {
                total |= nums[end];
                if (total >= k) {
                    ans = min(ans, end - start + 1);
                    break; // No need to continue further for this starting point
                }
            }
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};
