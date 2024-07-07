class Solution
{
public:
    int numberOfSubmatrices(vector<vector<char>>& grid)
    {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>>r(n, vector<int>(m, 0)), c(n, vector<int>(m, 0));

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]=='X')
                {
                    r[i][j]=1;
                }
                if(grid[i][j]=='Y')
                {
                    c[i][j]=1;
                }
                if(i>0)
                {
                    r[i][j]+=r[i-1][j];
                    c[i][j]+=c[i-1][j];
                }
            }
        }

        int ans=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(j>0)
                {
                    r[i][j]+=r[i][j-1];
                    c[i][j]+=c[i][j-1];
                }
                if(r[i][j]==c[i][j] and r[i][j]>0)
                {
                    ans++;
                }
            }
        }
        /*
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<r[i][j]<<" ";
            }
            cout<<endl;
        }
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
        */
        return ans;

    }
};

