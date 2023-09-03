 class Solution
{
public:
    int countSymmetricIntegers(int low, int high)
    {
        int ans=0;
        while(low<=high)
        {
            string s=to_string(low);
            if(s.size()%2==0)
            {
                int m=s.size()/2;
                int s1=0, s2=0;
                for(int i=0;i<m;i++)
                {
                    s1+=s[i];
                }
                for(int i=m;i<s.size();i++)
                {
                    s2+=s[i];
                }
                
                if(s1==s2)
                {
                    ans++;
                }
            }
            low++;
        }
        
        return ans;

    }
};


