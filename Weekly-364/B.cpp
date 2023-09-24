class Solution
{
public:
    long long maximumSumOfHeights(vector<int>& a)
    {
        long long n = static_cast<long long>(a.size());
        long long ans = 0; // Use long long for the answer to avoid overflow
        for(long long i = 0; i < n; i++)
        {
            long long cur = i - 1;
            long long mx = a[i];
            long long cnt = a[i]; // Initialize cnt for the current element
            while(cur >= 0)
            {
                mx = std::min(static_cast<long long>(mx), static_cast<long long>(a[cur]));
                cnt += mx;
                cur--;
            }
            cur = i + 1;
            mx = a[i];
            while(cur < n)
            {
                mx = std::min(static_cast<long long>(mx), static_cast<long long>(a[cur]));
                cnt += mx;
                cur++;
            }
            
            ans = std::max(ans, cnt);
        }
        
        return ans;
    }
};
