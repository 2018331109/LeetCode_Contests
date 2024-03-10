class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(), h.end());
        int i=h.size()-1;
        long long ans=0;
        int cnt=0;
        while(k--)
        {
            ans+=max(0, h[i]-cnt);
            cnt++;
            i--;
        }
        
        return ans;
        
    }
};
