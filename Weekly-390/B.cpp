class Solution {
public:
    int minOperations(int k) {
        
        int x=1, total=1, ans=INT_MAX;
        for(int i=1;i<=k;i++)
        {
            int now=i-1+(k-i)/i+((k-i)%i!=0);
            ans=min(ans, now);
        }
        
        return ans;
        
    }
};
