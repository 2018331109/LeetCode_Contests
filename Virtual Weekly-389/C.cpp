class Solution
{
public:
    int minimumDeletions(string word, int k)
    {
        vector<int>v(26, 0);
        for(auto it:word)
        {
            v[it-'a']++;
        }
        int ans=INT_MAX;
        for(int i=1; i<100001; i++)
        {
            int res=0;
            for(int j=0; j<26; j++)
            {
                if(v[j]<i)
                {
                    res+=v[j];
                }
                else
                {
                    int removal=max(0, v[j]-(i+k));
                    res+=removal;
                }
            }
            ans=min(ans, res);

        }
        return ans;

    }
};
