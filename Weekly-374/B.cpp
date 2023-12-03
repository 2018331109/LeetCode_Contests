class Solution
{
public:
    int minimumAddedCoins(vector<int>& coins, int target)
    {
        sort(coins.begin(),coins.end());
        int n=coins.size();
        int ans=0;
        int need=1;
        int total=0;
        while(total<target)
        {

            for(int i=0; i<n; i++)
            {
                //cout<<total<<endl;
                if(total>=target)
                {
                    break;
                }
                if(coins[i]<=need)
                {
                    total+=coins[i];
                    need=total+1;
                }
                else if(coins[i]>need)
                {
                    while(total<target && need<coins[i])
                    {
                        cout<<total<<endl;
                        total+=need;

                        need=total+1;
                        ans++;
                    }
                    i--;
                }
            }
            while(total<target)
            {
                total+=need;
                need=total+1;
                ans++;
            }
        }
        //cout<<total<<endl;




        return ans;

    }
};


