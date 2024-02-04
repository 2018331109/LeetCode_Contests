class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int cnt=0;
        int total=0;
        for(auto it:nums)
        {
            total+=it;
            cnt+=(total==0);
        }
        
        return cnt;
        
    }
};
