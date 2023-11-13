class Solution
{
public:
    int maximumStrongPairXor(vector<int>& nums)
    {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int mx=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(abs(nums[i]-nums[j])>nums[i])
                {
                    break;
                }
                else
                {
                    mx=max(mx, nums[i]^nums[j]);
                }
            }
        }

        return mx;


    }
};
