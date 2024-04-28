class Solution
{
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2)
    {
        int n=nums1.size(), m=nums2.size();
        int i=n-1, j=m-1;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int ans=INT_MAX;
        for(int k=n-1; k-m+1>=0; k--)
        {
            int i=k, j=m-1;
            int x=nums2[j]-nums1[i];
            while(i>=0 and j>=0)
            {
                if(i<j or i<0 or j<0)
                {
                    break;
                }
                if(nums2[j]-nums1[i]==x)
                {
                    i--, j--;
                }
                else
                {
                    i--;
                }
            }
            if(j<0)
            {
                ans=min(ans, x);
            }
        }
        return ans;

    }
};


