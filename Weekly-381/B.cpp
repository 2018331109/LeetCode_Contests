class Solution
{
public:
    const int inf=1000000009;
    vector<int> countOfPairs(int n, int x, int y)
    {
        vector<vector<int>>dp(n+1, vector<int>(n+1, inf));
        dp[x-1][y-1]=dp[y-1][x-1]=1;
       for(int i=0;i<n;i++)
       {
           dp[i][i]=0;
           if(i!=n-1)
           {
               dp[i][i+1]=dp[i+1][i]=1;
           }
       }
        
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    dp[i][j]=min(dp[i][j], dp[i][k]+dp[k][j]);
                }
            }
        }
        
        vector<int>v(n, 0);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    v[dp[i][j]-1]++;
                }
                 
            }
        }
        
        int ans=accumulate(v.begin(), v.end(), 0);
        
        //cout<<ans<<endl;
        return v;


    }
};

