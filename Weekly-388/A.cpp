class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total=0;
        for(auto it:apple)
        {
            total+=it;
        }
        
        sort(capacity.begin(), capacity.end());
        
        int i=capacity.size();
        i--;
        int cnt=0;
        while(i>=0 and total>0)
        {
            total-=capacity[i];
            cnt++, i--;
        }
        
        if(total<=0)
        {
            return cnt;
        }
        return -1;
        
    }
};
