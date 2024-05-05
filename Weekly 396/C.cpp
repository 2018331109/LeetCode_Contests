class Solution
{
public:
    int minAnagramLength(string s)
    {
        int n=s.size();
        string t=s;
        sort(t.begin(), t.end());
        if(t[0]==t[n-1])
        {
            return 1;
        }
        int ans=n;
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                int ni=n/i, f=1;
                string temp=s.substr(0, i);
                sort(temp.begin(), temp.end());
                for(int j=i; j+i<=n; j+=i)
                {
                    t=s.substr(j, i);
                    sort(t.begin(), t.end());
                    //cout<<temp<<" "<<t<<endl;
                    if(temp!=t)
                    {
                        f=0;
                        break;
                    }
                }
                
                if(f)
                {
                    ans=min(ans, i);
                }
                f=1;
                temp=s.substr(0, ni);
                sort(temp.begin(), temp.end());
                for(int j=ni; j+ni<=n; j+=ni)
                {
                    t=s.substr(j, ni);
                    sort(t.begin(), t.end());
                    //cout<<temp<<" "<<t<<endl;
                    if(temp!=t)
                    {
                        f=0;
                        break;
                    }
                }
                if(f)
                {
                    ans=min(ans, ni);
                }
            }
        }
        
        return ans;

    }
};

