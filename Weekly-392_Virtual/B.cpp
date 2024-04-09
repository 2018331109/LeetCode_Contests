class Solution
{
public:
    string getSmallestString(string s, int k)
    {
        
        int n=s.size();
        string ans="";
        for(int i=0; i<n; i++)
        {
            cout<<k<<endl;
            if(k==0)
            {
                ans+=s[i];
                continue;
            }
            int l=s[i]-'a', r='z'-s[i]+1;
            cout<<l<<" "<<r<<endl;
            if(l<=r)
            {
                if(k>=l)
                {
                    ans+="a";
                    k-=l;
                }
                else
                {
                    ans+=(char)(s[i]-k);
                    k=0;
                }
            }
            else
            {
                if(k>=r)
                {
                    ans+="a";
                    k-=r;
                }
                else
                {
                    if(k>=l)
                    {
                        ans+="a";
                        k-=l;
                    }
                    else
                    {
                        ans+=(char)(s[i]-k);
                        k=0;
                    }
                }
            }
        }
        return ans;

    }
};

