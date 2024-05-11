class Solution
{
public:
    static bool comp(const pair<int, char>& a, const pair<int, char>& b)
    {
        if (a.first != b.first)
            return a.first < b.first;
        return a.second < b.second;
    }

    int maxPointsInsideSquare(vector<vector<int>>& points, string s)
    {
        vector<pair<int, char>> mp;
        int ans = 0; // Initialize ans
        int i = 0;
        int bd=0;
        for (auto it : points)
        {
            int mx = max(abs(it[0]), abs(it[1]));
            bd=max(bd, mx);
            mp.push_back({mx, s[i++]});
        }
        sort(mp.begin(), mp.end(), comp);
        map<char, int> cnt;
        int mx=bd+1;
        for (auto it : mp)
        {
            char ch = it.second; // Access second element of pair
            cnt[ch]++;
            if (cnt[ch] > 1)
            {
                mx=it.first;
                break;
            }
        }
        
        //cout<<mx<<endl;
        for(auto it:mp)
        {
            if(it.first<mx)
            {
                //cout<<it.first<<" ";
                ans++;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};
