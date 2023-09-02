class Solution {
public:
    bool checkStrings(string a, string b) {
        string aa, bb, cc, dd;
        for(int i=0;i<a.size();i++)
        {
            if(i%2==0)
            {
                aa+=a[i];
                bb+=b[i];
            }
            else
            {
                cc+=a[i];
                dd+=b[i];
            }
        }
        sort(aa.begin(), aa.end());
        sort(bb.begin(), bb.end());
        sort(cc.begin(), cc.end());
        sort(dd.begin(), dd.end());
        if(aa==bb && cc==dd)
        {
            return true;
        }
        return false;
    }
};


