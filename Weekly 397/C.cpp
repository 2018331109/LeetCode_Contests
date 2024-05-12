class Solution
{
public:
    int maxScore(vector<vector<int>>& grid)
    {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> mn(n, vector<int>(m, INT_MAX));
        mn[0][0] = grid[0][0];
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i - 1 >= 0)
                {
                    ans=max(ans, grid[i][j]-mn[i-1][j]);
                    mn[i][j] = min(mn[i][j], min(grid[i][j], mn[i - 1][j]));
                }
                if (j - 1 >= 0)
                {
                    ans=max(ans, grid[i][j]-mn[i][j-1]);
                    mn[i][j] = min(mn[i][j], min(grid[i][j], mn[i][j - 1]));
                }

            }
        }
        return ans;
    }
};

