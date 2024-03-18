class Solution {
public:
    bool isSubstringPresent(string s) {
        int n=s.size();
        string r=s;
        reverse(r.begin(), r.end());
        
        for(int i=0;i<n-1;i++)
        {
             
            if(r.find(s.substr(i, 2))!=string::npos)
            {
                return true;
            }
        }
        return false;
    }
};
