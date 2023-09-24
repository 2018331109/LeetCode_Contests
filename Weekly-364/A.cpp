class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        int n=s.size();
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                cnt++;
            }
        }
        string ans;
        int i=1;
        for(i=1; i<cnt; i++)
        {
            ans+='1';
        }
        while(i<n)
        {
            ans+='0';
            i++;
        }
        ans+='1';

        return ans;

    }
};
