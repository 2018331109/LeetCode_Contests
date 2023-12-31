class Solution
{
public:
    int maximumLength(string s)
    {
        int n=s.size();
        int cnt=1;
        if(n<3)
        {
            return -1;
        }
        map<char, vector<int>>mp;
        for(int i=1; i<n; i++)
        {
            if(s[i-1]==s[i])
            {
                cnt++;
                 
            }
            else
            {
                mp[s[i-1]].push_back(cnt);
                cnt=1;
            }
        }
        int ans=-1;
        mp[s[n-1]].push_back(cnt);
        for(auto it:mp)
        {
            vector<int>v=it.second;
            
            int k=v.size();
            sort(v.begin(), v.end());
            if(v[k-1]<3 && k==1)
            {
                continue;
            }
            ans=max(ans, v[k-1]-2);
            if(k>=2)
            {
                ans=max(ans,  min(v[k-2], v[k-1]-1));
            }
            if(k>=3)
            {
                ans=max(ans, v[k-3]);
            }
        }
        if(ans<=0)
        {
            ans=-1;
        }
        return ans;
    }
};
