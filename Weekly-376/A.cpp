class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        map<int, int>mp;
        int num=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mp[grid[i][j]]++;
                
            }
        }
        vector<int>ans;
        for(int i=1;i<=n*n;i++)
        {
            if(mp[i]==0 || mp[i]==2)
            {
                ans.push_back(i);
            }
        }
        if(mp[ans[0]]==0)
        {
            swap(ans[0], ans[1]);
        }
        return ans;
        
    }
};
