class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int, int>mp;
        int cnt=0;
        for(auto it:nums)
        {
            mp[it]++;
            cnt=max(cnt, mp[it]);
            if(cnt>2)
            {
                return false;
            }
        }
        return true;
    }
};
