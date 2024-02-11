class Solution
{
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& mat)
    {
        int n=mat.size(), m=mat[0].size();
        for(int i=0;i<m;i++)
        {
            int mx=INT_MIN;
            for(int j=0;j<n;j++)
            {
                mx=max(mx, mat[j][i]);
            }
            for(int j=0;j<n;j++)
            {
                if(mat[j][i]==-1)
                {
                    mat[j][i]=mx;
                }
            }
            
        }
        
        return mat;

    }
};

