class Solution
{
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& p)
    {
        int n=nums.size(), m=p.size();
        int cnt=0;
        for(int i=0;i+m<n;i++)
        {
            int j=0;
            for(j=0;j<m;j++)
            {
                if(p[j]==1)
                {
                    if(nums[i+j+1]>nums[i+j])
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                else if(p[j]==0)
                {
                    if(nums[i+j+1]==nums[i+j])
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if(nums[i+j+1]<nums[i+j])
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if(j==m)
            {
                cnt++;
            }
        }
        
        return cnt;
            
  
    }
};

