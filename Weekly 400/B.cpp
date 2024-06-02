class Solution
{
public:
    static bool comp(const pair<int, int>& a, const pair<int, int>& b)
    {
        if(a.first==b.first)
        {
            return a.second<b.second;
        }
        return a.first<b.first;
    }
    int countDays(int days, vector<vector<int>>& meetings)
    {
        vector<pair<int, int>>v;
        for(auto it:meetings)
        {
            v.push_back({it[0], it[1]});
        }
        sort(v.begin(), v.end(), comp);
        int ans=0;
        int mn=1, mx=0;
        for(int i=0; i<v.size(); i++)
        {
            if(mx<v[i].first)
            {
                ans+=(v[i].first-mx-1);
            }
            mx=max(mx, v[i].second);
        }
        //cout<<mx<<endl;
        ans+=days-mx;
        
        return ans;

    }
};

