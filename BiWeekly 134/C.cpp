class Solution
{
public:
    int numberOfAlternatingGroups(vector<int>& c, int k)
    {
        int n=c.size();
        vector<int>v(n+k-1);
        for(int i=0; i<n; i++) v[i]=c[i];
        int i=0, j=n;
        while(i<k-1)
        {
            v[j]=c[i];
            i++, j++;
        }
        i=0, j=0;
        n=n+k-1;
        int cnt=1, ans=0;
        while(j<n-1)
        {
            if(v[j]!=v[j+1])
            {
                cnt++;
            }
            else
            {
                ans+=max(0, cnt-k+1);
                cnt=1;
            }
            j++;
        }
        ans+=max(0, cnt-k+1);
         
        return ans;
    }
};

