class Solution
{
public:
    int removeAlmostEqualCharacters(string s)
    {
        int n=s.size();
        
        int i=1;
        int cnt=0;
        while(i<n)
        {
            if(abs(s[i]-s[i-1])<=1)
            {
                cnt++;
                i++;
                
            }
            i++;
        }
        
        return cnt;

    }
};

