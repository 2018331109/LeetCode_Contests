class Solution
{
public:
    int minimumPushes(string s)
    {
        unordered_map<char, int> mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        vector<int>v;
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        sort(v.begin(), v.end(), greater<int>());
        
        int ans=0;
        int cnt=1;
        for(int i=0;i<v.size();i++)
        {
            if(cnt<=8)
            {
                ans+=v[i];
            }
            else if(cnt<=16)
            {
                ans+=v[i]*2;
            }
            else if(cnt<=24)
            {
                ans+=v[i]*3;
            }
            else
            {
                ans+=v[i]*4;
            }
            
            
            cnt++;
        }
        
        return ans;

    }
};

