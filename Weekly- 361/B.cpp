class Solution
{
public:
    int minimumOperations(string num)
    {
        map<char, int> mp, f;
        int n = num.size();
        for (int i = 0; i < num.size(); i++)
        {
            mp[num[i]] = i;
            f[num[i]]++;
        }

        int ans = num.size() - f['0'];
        
        cout<<ans<<endl;

        int i = n - 1;
        while (i >= 0)
        {
            if (num[i] == '0')
            {
                break;
            }
            i--;
        }



        int ind = i;
        i--;

        while (i >= 0 && ind >= 0)
        {
            if (num[i] == '0')
            {
                ans = min(ans, static_cast<int>(n - ind - 1)+(ind-i-1));
                break;
            }
            i--;
        }

        i=ind-1;

        while (i >= 0 && ind >= 0)
        {
            if (num[i] == '5')
            {
                ans = min(ans, static_cast<int>(n - ind - 1)+(ind-i-1));
                break;
            }
            i--;
        }

        i = n - 1;
        while (i >= 0)
        {
            if (num[i] == '5')
            {
                break;
            }
            i--;
        }

        ind = i;
        while (i >= 0 && ind >= 0)
        {
            if (num[i] == '2')
            {
                ans = min(ans, static_cast<int>(n - ind - 1)+(ind-i-1));
                break;
            }
            i--;
        }
        
        i=ind-1;
        while (i >= 0 && ind >= 0)
        {
            if (num[i] == '7')
            {
                ans = min(ans, static_cast<int>(n - ind - 1)+(ind-i-1));
                break;
            }
            i--;
        }

        return ans;
    }
};



