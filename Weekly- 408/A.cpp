class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int a=0, b=0;
        for(auto it:nums){
            a+=it;
            if(it<10) b+=it;
        }
        a-=b;
        if(a==b) return false;
        return true;
        
    }
};
