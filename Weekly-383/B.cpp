class Solution
{
public:
    int minimumTimeToInitialState(string s, int k)
    {
        int n=s.size();
        int cnt=0;
        
        int mx=0;
        
        if(n%k==0)
        {
            mx=n/k;
        }
        else
        {
            mx=n;            
        }
        int f=0;
        for(int i=0;i+k<n;i+=k)
        {
            cnt++;
            string last=s.substr(i+k);
            int l=last.size();
            string first=s.substr(0, l);
            //cout<<last<<" "<<first<<endl;
            if(last==first)
            {
                f=1;
                break;
            }
        }
        mx=cnt;
        //cout<<f<<endl;
        if(f==0)
        {
            mx+=1;
            
        }
        return mx;

    }
};

