class Solution
{
public:
    int maxBottlesDrunk(int n, int e)
    {
        int full=0, emp=n, exc=e, ans=n;
        while(emp>=exc)
        {
             ans+=full;
             if(emp>=exc)
             {
                 emp-=exc-1;
                 full=1;
                 exc++;
             }
        }
        cout<<emp<<" "<<exc<<" "<<full<<endl;

        return (ans+full);


    }
};

