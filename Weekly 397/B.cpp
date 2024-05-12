class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        unordered_map<int, int>mp;
        
        int ans=INT_MIN, n=energy.size();
        for(int i=n-1;i>=0;i--)
        {
            mp[i%k]+=energy[i];
            ans=max(ans, mp[i%k]);
        }
        return ans;
    }
};
