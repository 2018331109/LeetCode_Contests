class Solution
{
public:
    vector<int> getGoodIndices(vector<vector<int>>& v, int k)
    {
        vector<int>ans;
        int cnt=0;
        for(auto it:v)
        {
            int a=it[0], b=it[1], c=it[2], m=it[3];
            cout<<a<<" "<<b<<" "<<c<< " "<<m<<endl;

            b-=1;
            int aa=a;
            while(b--)
            {
                aa*=a;
                aa%=10;
            }
            aa%=10;
            cout<<aa<<endl;

            c-=1;
            int aaa=aa;
            while(c--)
            {
                aaa*=aa;
                aaa%=m;
            }
            
            aaa%=m;
            cout<<aaa<<endl;

            if(aaa==k)
            {
                ans.push_back(cnt);
            }
            cnt++;
        }

        return ans;


    }
};


