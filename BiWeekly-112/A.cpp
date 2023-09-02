 //#include<bits/stdc++.h>
//using namespace std;

class Solution
{
public:
    bool canBeEqual(string a, string b)
    {
        if(((a[0]==b[0] && a[2]==b[2]) || (a[0]==b[2] && a[2]==b[0])) && ((a[1]==b[1] && a[3]==b[3]) || (a[1]==b[3] && a[3]==b[1])))
        {
            return true;
        }
        return false;

    }
};
