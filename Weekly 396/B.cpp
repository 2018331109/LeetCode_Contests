class Solution
{
public:
    int minimumOperationsToMakeKPeriodic(string s, int k)
    {
        int n=s.size();
        unordered_map<string, int>mp;
        int mx=0;
        for(int i=0; i+k<=n; i+=k)
        {
            mp[s.substr(i, k)]++;
            mx=max(mx, mp[s.substr(i, k)]);
        }
        //cout<<mx<<endl;
        return (n/k)-mx;
    }
};

