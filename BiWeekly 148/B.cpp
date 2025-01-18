class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        int n = arr.size();
        long long withoutRearrange = 0, withRearrange = k;

        // Calculate cost without rearranging
        for (int i = 0; i < n; ++i) {
            withoutRearrange += abs(arr[i] - brr[i]);
        }

        // Calculate cost with rearranging
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());
        for (int i = 0; i < n; ++i) {
            withRearrange += abs(arr[i] - brr[i]);
        }

        // Return the minimum cost
        return min(withoutRearrange, withRearrange);
    }
};

