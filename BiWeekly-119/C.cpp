class Solution
{
public:
    int maxSubarrayLength(vector<int>& nums, int k)
    {
        map<int, int>mp;
        int n=nums.size();
        int maxk=0;
        int ans=0;
        int l=0, r=0;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
            maxk=max(maxk, mp[nums[i]]);
            if(maxk > k)
            {
                int cur=i;
                while(maxk>k)
                {
                    mp[nums[l]]--;
                    if(nums[l]==nums[i])
                    {
                        maxk--;
                    }
                    l++;
                    
                }
            }
            r=i;
            ans=max(ans, r-l+1);
        }
        
        return ans;

    }
};
