class Solution
{
public:
    int countTestedDevices(vector<int>& v)
    {
        int cnt=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>cnt)
            {
                cnt++;
            }
        }
        
        return cnt;

    }
};
