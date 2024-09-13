class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long long ans = 0, last = nums[0];
        int j = 0, n = nums.size();
        for (int i = 1; i < n; ++i) {
            if (nums[i] > last) {
                ans += (i - j) * last;
                last = nums[i];
                j = i;
            }
        }
        // Add the score for jumping directly from the last recorded index to the end
        //cout<<last<<endl;
        ans += (n - 1 - j) * last;
        return ans;
    }
};

