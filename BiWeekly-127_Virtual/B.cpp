class Solution
{
public:
    int minimumLevels(vector<int>& nums)
    {
        int n=nums.size();
        vector<int>v(n, 0);
        if(n==1)
        {
            return (nums[0]==1)? 1: -1;
        }
        v[n-1]=(nums[n-1]==1)? 1: -1;
        for(int i=n-2; i>=0; i--)
        {
            v[i]=v[i+1]+((nums[i]==1)? 1: -1);
        }
        int total=0;
        
        for(int i=0;i<n-1;i++)
        {
           total+=(nums[i]==1)? 1: -1;
           //cout<<total<<" "<<v[i+1]<<endl;
           if(total>v[i+1])
           {
               return i+1;
           }
        }
         
        return -1;
    }
};

