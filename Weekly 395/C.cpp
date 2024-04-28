class Solution
{
public:
    long long minEnd(int n, int x)
    {
        vector<long long>v(60, 0);
        long long j=0, demon=x, cnt=0;
        vector<long long>pos, ans;
        while(demon)
        {
            if(demon%2==1)
            {
                v[j]=1;
            }
            else
            {
                v[j]=0;
                cnt++;
                pos.push_back(j);

            }
            j++;
            demon/=2;
        }
        //cout<<cnt<<endl;
        long long mxhobe=(1<<cnt);
        if(mxhobe>=n)
        {
            long long demon=n-1;
            long long j=0;
            while(demon)
            {
                if(demon%2==1)
                {
                    v[pos[j]]=1;
                }
                else
                {
                    v[pos[j]]=0;
                }
                demon/=2;
                j++;
            }

        }
        else
        {
            vector<long long>ex;
            long long demon=n-1;
            while(demon)
            {
                if(demon%2)
                {
                    ex.push_back(1);
                }
                else
                {
                    ex.push_back(0);
                }
                demon/=2;
            }
            long long i=0;
            while(i<pos.size())
            {
                v[pos[i]]=ex[i];
                i++;
            }
            long long j = pos.empty() ? 0 : (pos.back() + 1);
            while (v[j] != 0)
            {
                j++;
            }
            while(i<ex.size())
            {
                v[j]=ex[i];
                i++, j++;
            }

        }

        long long sum=0;
        long long it=1, i=0;
        while(i<v.size())
        {
            if(v[i]==1)
            {
                sum+=it;
            }
            it*=2;
            i++;
        }
        return sum;
    }

};

