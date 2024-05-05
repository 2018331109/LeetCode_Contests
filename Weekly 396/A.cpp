class Solution {
public:
    bool isValid(string word) {
        int ch=0, v=0, c=0;
        string s="AEIOUaeiou";
        int l=(word.size()>=3)? 1: 0;
        for(auto it:word)
        {
            if(it>='0' and it<='9')
            {
                continue;
            }
            else if(s.find(it)!=string::npos)
            {
                v=1;
            }
            else if((it>='a' and it<='z') or (it>='A' and it<='Z'))
            {
                c=1;
            }
            else
            {
                return false;
            }
        }
        cout<<l<<" "<<ch<<" "<<v<<" "<<c<<endl;
        return (l&v&c);
        
    }
};
