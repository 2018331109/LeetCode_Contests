class Solution
{
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& ac)
    {

        map<string, vector<int>>mp;

        for(auto it: ac)
        {
            int cnt=0;
            string name=it[0];
            string s=it[1];
            cnt+=((s[0]-'0')*1000);
            cnt+=((s[1]-'0')*100);
            cnt+=((s[2]-'0')*10);
            cnt+=((s[3]-'0')*1);
            mp[name].push_back(cnt);
        }

        vector<string>ans;
        for(auto it:mp)
        {

            if(it.second.size()>2)
            {
                cout<<it.first<<endl;
                sort(it.second.begin(), it.second.end());

                int i=0;
                while(i+2<it.second.size())
                {
                    if(abs(it.second[i+2]-it.second[i])<100)
                    {
                        ans.push_back(it.first);
                        break;
                    }
                    i++;
                }
            }
        }
        return ans;

    }
};
