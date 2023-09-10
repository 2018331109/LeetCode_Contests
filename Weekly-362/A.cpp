class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        int last = INT_MIN; // Initialize last to a very small value
        
        for (auto it : nums) {
            int start = it[0];
            int end = it[1];
            
            if (start > last) {
                cnt += end - start + 1;
                last = end;
            } else if (end > last) {
                cnt += end - last;
                last = end;
            }
        }
        
        return cnt;
    }
};
