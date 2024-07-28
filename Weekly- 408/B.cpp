class Solution
{
public:
    vector<int> primes;

    Solution()
    {
        // Precompute primes up to sqrt(10^9)
        int MAX_LIM = 31622; // ceil(sqrt(10^9))
        primes = sieve(MAX_LIM);
    }

    vector<int> sieve(int max_lim)
    {
        vector<int> primes;
        vector<bool> is_prime(max_lim + 1, true);
        is_prime[0] = is_prime[1] = false;
        for (int i = 2; i <= max_lim; ++i)
        {
            if (is_prime[i])
            {
                primes.push_back(i);
                for (int j = i * 2; j <= max_lim; j += i)
                {
                    is_prime[j] = false;
                }
            }
        }
        return primes;
    }

    int nonSpecialCount(int l, int r)
    {
        int left = sqrt(l), right = sqrt(r);
        if (left * left < l) left++;
        if (left > right) return r - l + 1;

        int lb = lower_bound(primes.begin(), primes.end(), left) - primes.begin();
        int ub = upper_bound(primes.begin(), primes.end(), right) - primes.begin();
        int special_count = max(0, ub - lb);
        return (r - l + 1) - special_count;
    }
};

