class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ind=lower_bound(nums.begin(), nums.end(), k)-nums.begin();
        return ind;
        
    }
};
