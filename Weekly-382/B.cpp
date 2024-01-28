#include <vector>
#include <map>
#include <cmath>

class Solution
{
public:
    int maximumLength(std::vector<int>& nums)
    {
        int n = nums.size();
        int mx = 0;
        std::map<int, int> mp;
        for (auto it : nums)
        {
            mp[it]++;
            mx = std::max(mx, it);
        }

        int ans = 1;
        int cnt = 1;

        auto ele = mp.rbegin();
        while (ele != mp.rend())
        {
            cnt = 1;
            int vl = ele->first;
            int sq = std::sqrt(vl);


            if (sq * sq == vl)
            {
                //vl = sq;
                if(sq==1)
                {
                    if(mp[vl]%2)
                    {
                        ans=max(ans, mp[vl]);
                    }
                    else
                    {
                        ans=max(ans, mp[vl]-1);
                    }
                    ++ele;
                    continue;
                }
                cnt = 1;
                ans = std::max(ans, cnt);
                while (true)
                {
                    sq = std::sqrt(vl);
                    if (sq * sq == vl && mp[sq] >= 2)
                    {
                        vl = sq;
                        cnt += 2;
                        ans = std::max(ans, cnt);
                    }
                    else
                    {
                        break;
                    }
                }
            }

            ++ele;
        }

        return ans;
    }
};


