class Solution
{
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2)
    {
        int n=nums1.size();

        int ans=1000009;
        int cnt=0;
        int vl=nums1[n-1];
        int f=0;
        int mx=0;
        for(int i=0; i<n-1; i++)
        {
            if((nums1[i]>nums1[n-1]&&nums1[i]>nums2[n-1]) || (nums2[i]>nums1[n-1]&&nums2[i]>nums2[n-1]))
            {
                f=1;
                break;
            }
            if((nums1[i]>nums1[n-1]&&nums2[i]>nums1[n-1]) || (nums1[i]>nums2[n-1]&&nums2[i]>nums2[n-1]))
            {
                f=1;
                break;
            }
            if(nums1[i]>nums1[n-1])
            {
                cnt++;
            }
            if(nums2[i]>nums2[n-1])
            {
                cnt++;
            }
        }

        if(f==0)
        {
            ans=cnt;
        }
        cnt=1;
        f=0;
        swap(nums1[n-1], nums2[n-1]);
        for(int i=0; i<n-1; i++)
        {
            if((nums1[i]>nums1[n-1]&&nums1[i]>nums2[n-1]) || (nums2[i]>nums1[n-1]&&nums2[i]>nums2[n-1]))
            {
                f=1;
                break;
            }
            if((nums1[i]>nums1[n-1]&&nums2[i]>nums1[n-1]) || (nums1[i]>nums2[n-1]&&nums2[i]>nums2[n-1]))
            {
                f=1;
                break;
            }
            if(nums1[i]>nums1[n-1])
            {
                cnt++;
            }
            if(nums2[i]>nums2[n-1])
            {
                cnt++;
            }
        }
        if(f==0)
        {
            ans=min(ans, cnt);
        }

        if(ans==1000009)
        {
            return -1;
        }
        return ans;


    }
};

