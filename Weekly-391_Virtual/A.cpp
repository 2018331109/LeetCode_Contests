class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        
        return call(x);
        
        
    }
    
    int call(int n)
    {
        int total=0;
        int x=n;
        while(x)
        {
            total+=x%10;
            x/=10;
        }
        //return n%total==0;
        cout<<total<<endl;
        if(n%total==0)
        {
            return total;
        }
        else
        {
            return -1;
        }
    }
};
