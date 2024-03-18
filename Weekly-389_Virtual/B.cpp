class Solution {
public:
    long long countSubstrings(string s, char c) {
       long long ans=0, cnt=1;
        for(auto it:s)
        {
            if(it==c)
            {
                ans+=cnt;
                cnt++;
            }
        }
        return ans;
        
    }
};
