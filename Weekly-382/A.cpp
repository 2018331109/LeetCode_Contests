class Solution {
public:
    int countKeyChanges(string s) {
        
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        vector<int>v(26, 0);
       int ans=0;
        int n=s.size();
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                ans++;
            }
        }
        
        return ans;
        
        
    }
};
