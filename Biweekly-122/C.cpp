class Solution {
public:
    int minimumArrayLength(vector<int>& nums) {
        map<int, int>mp;
        int gc=0;
        for(auto it:nums)
        {
            mp[it]++;
            gc=__gcd(gc, it);
        }
        int ans=max(1, (mp[gc]+1)/2);
        return ans;
    }
};
