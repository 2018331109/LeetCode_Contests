class Solution
{
public:
    string clearStars(string s)
    {
        vector<vector<int>>v(26, vector<int>());
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='*')
            {
                v[s[i]-'a'].push_back(i);
            }
            else
            {
                for(int j=0;j<26;j++)
                {
                    if(v[j].size()>0)
                    {
                        s[v[j][v[j].size()-1]]='0';
                        v[j].pop_back();
                        break;
                    }
                }
            }
        }
        string ans;
        for(auto it:s)
        {
            if(it=='0' or it=='*')
            {
                ;
            }
            else
            {
                ans+=it;
            }
        }
        return ans;

    }
};
