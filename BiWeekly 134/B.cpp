class Solution
{
public:
    long long maximumPoints(vector<int>& v, int eng)
    {
        int cnt=0;
        sort(v.begin(), v.end());
        int j=v.size()-1;
        while(j>0)
        {
            if(eng>=v[0])
            {
                int x=eng/v[0];
                cnt+=x;
                eng-=(x*v[0]);
            }
            else if(cnt)
            {
                eng+=v[j];
                j--;
            }
            else
                break;
            
        }
        cnt+=(eng/v[0]);
        return cnt;
    }
};

