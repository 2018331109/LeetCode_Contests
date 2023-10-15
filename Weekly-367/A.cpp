class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n = nums.size();
        vector<int> answer = {-1, -1}; // Initialize with -1, -1 in case no valid indices are found.

        for (int i = 0; i < n; i++) {
            for (int j = i + indexDifference; j < n; j++) {
                if (abs(i - j) >= indexDifference && abs(nums[i] - nums[j]) >= valueDifference) {
                    answer[0] = i;
                    answer[1] = j;
                    return answer; // Return the indices if conditions are met.
                }
            }
        }

        return answer; // Return [-1, -1] if no valid indices are found.
    }
};
