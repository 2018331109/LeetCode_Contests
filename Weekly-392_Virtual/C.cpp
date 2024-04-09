#define ll long long
class Solution
{
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k)
    {
        int n=nums.size();
        sort(nums.begin(), nums.end()); 
        int idx=lower_bound(nums.begin(), nums.end(), k)-nums.begin();
        ll ans=0;
        if(idx<=(n/2))
        {
            for(int i=idx; i<=(n/2); i++)
            {
                ans+=abs(k-nums[i]);
            }
        }
        else
        {
            for(int i=(n/2); i<idx; i++)
            {
                ans+=abs(k-nums[i]);
            }
        }
        return ans;

    }
};

