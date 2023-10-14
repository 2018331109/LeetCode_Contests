#include <vector>
#include <string>

class Solution
{
public:
    vector<int> lastVisitedIntegers(vector<string>& words)
    {
        vector<int> ans;
        vector<string> a;
        int cnt = 0;

        for (int i = 0; i < words.size(); i++)
        {
            if (words[i] == "prev")
            {
                cnt++;
                if (cnt <= a.size())
                {
                    int num = 0;
                    bool converted = tryConvertToInt(a[a.size() - cnt], num);
                    if (converted)
                    {
                        ans.push_back(num);
                    }
                    else
                    {
                        ans.push_back(-1);  // Handle when there are not enough valid previous integers
                    }
                }
                else
                {
                    ans.push_back(-1);  // Handle when there are not enough previous integers
                }
            }
            else
            {
                a.push_back(words[i]);
                cnt = 0;
            }
        }

        return ans; // Return the vector of integers
    }

private:
    bool tryConvertToInt(const std::string& str, int& result)
    {
        try
        {
            result = std::stoi(str);
            return true;
        }
        catch (const std::invalid_argument& e)
        {
            return false;
        }
    }
};

