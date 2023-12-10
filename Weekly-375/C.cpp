class Solution
{
public:
    long long countSubarrays(vector<int>& nums, int k)
    {
        long long n=nums.size();
        long long mx=*max_element(nums.begin(), nums.end());
        long long cnt=0;
        long long l=0;
        long long f=0;
        long long ans=0;
        long long last=0;
        for(long long i=0;i<n;i++)
        {
            if(nums[i]==mx)
            {
                cnt++;
            }
            if(cnt==k)
            {
                while(cnt==k)
                {
                    cnt-=(nums[l]==mx);
                    l++;
                }
                long long ll=l-last;
                long long mm=n-i;
                if(ll==0)
                {
                    ans+=mm;
                }
                else
                {
                    ans+=(mm*ll);
                    f=1;
                }
                cout<<ans<<endl;
                
                last=l;
                
            }
        }
        
//        if(ans)
//        {
//            ans++;
//        }
        
        return ans;
        

    }
};


