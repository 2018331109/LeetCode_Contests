class Solution
{
public:
    int longestMonotonicSubarray(vector<int>& nums)
    {
        int n=nums.size(), cnt1=1, cnt2=1;
        int a=1, b=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            {
                cnt1++;
                a=max(a, cnt1);
            }
            else
            {
                cnt1=1;
            }
            
            if(nums[i]<nums[i-1])
            {
                cnt2++;
                b=max(b, cnt2);
            }
            else
            {
                cnt2=1;
            }
        }
        return max(a, b);

    }
};

