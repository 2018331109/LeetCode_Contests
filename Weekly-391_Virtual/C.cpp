#define ll long long
class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        ll cnt=1, ans=0;
        ll i=0, n=nums.size();
        while(i<n-1)
        {
            if(nums[i]!=nums[i+1])
            {
                cnt++;
            }
            else
            {
                ans+=(cnt*(cnt+1ll))/2ll;
                cnt=1;
            }
            i++;
        }
        ans+=(cnt*(cnt+1ll))/2ll;
        return ans;
    }
};
