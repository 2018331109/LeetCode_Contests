class Solution
{
public:
    int maximumPrimeDifference(vector<int>& nums)
    {
        vector<int> primes =
        {
            2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
            31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
            73, 79, 83, 89, 97
        };
        int f=0, s=0, cnt=0;
        for(int i=0; i<nums.size(); i++)
        {
            int ind=lower_bound(primes.begin(), primes.end(), nums[i])-primes.begin();
            if(ind<primes.size() and primes[ind]==nums[i])
            {
                if(cnt==0)
                {
                    f=i;
                    s=i;
                    cnt++;
                }
                else
                {
                    s=i;
                }
                cout<<f<<" "<<s<<endl;

            }
        }
         
        return s-f;

    }
};

