class Solution
{
public:
    int countWays(vector<int>& nums)
    {
        int n=nums.size();

        sort(nums.begin(), nums.end());

        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]<=i)
            {
                if(i+1 == n)
                {
                    ans++;
                    continue;
                }
                if(nums[i+1]-i>1)
                {
                     ans++;
                }
            }
        }
        if(nums[0]!=0)
        {
            ans++;
        }

        cout<<ans<<endl;
        return ans;

    }
};
