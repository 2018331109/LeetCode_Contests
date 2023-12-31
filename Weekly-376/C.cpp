class Solution
{
public:
    bool check_palindrome(long long x)
    {
        string s = to_string(x);
        string ss = s;
        reverse(ss.begin(), ss.end());
        return (s == ss);
    }

    long long minimumCost(vector<int>& nums)
    {
        long long n = nums.size();
        sort(nums.begin(), nums.end());
        int mid;
        long long ans;

        if (n % 2)
        {
            mid = nums[n / 2];

            int l = mid;
            while (!check_palindrome(l))
            {
                l--;
            }

            int r = mid;
            while (!check_palindrome(r))
            {
                r++;
            }

            long long total1=0, total2=0;

            for(int i=0; i<n; i++)
            {
                total1+=abs(nums[i]-l);
            }

            for(int i=0; i<n; i++)
            {
                total2+=abs(nums[i]-r);
            }

            ans = min(total1, total2);
            cout<<l<<" "<<r<<endl;
        }
        else
        {
            mid = nums[n / 2-1];

            int l = mid;
            while (!check_palindrome(l))
            {
                l--;
            }

            int r = mid;
            while (!check_palindrome(r))
            {
                r++;
            }

            long long total1=0, total2=0;

            for(int i=0; i<n; i++)
            {
                total1+=abs(nums[i]-l);
            }

            for(int i=0; i<n; i++)
            {
                total2+=abs(nums[i]-r);
            }



            ans = min(total1, total2);
            cout<<l<<" "<<r<<endl;

            mid = nums[n / 2];

            l = mid;
            while (!check_palindrome(l))
            {
                l--;
            }

            r = mid;
            while (!check_palindrome(r))
            {
                r++;
            }

            total1=0, total2=0;

            for(int i=0; i<n; i++)
            {
                total1+=abs(nums[i]-l);
            }

            for(int i=0; i<n; i++)
            {
                total2+=abs(nums[i]-r);
            }

            ans = min(ans, total1);
            ans=min(ans, total2);
            cout<<l<<" "<<r<<endl;
        }

        return ans;
    }
};
