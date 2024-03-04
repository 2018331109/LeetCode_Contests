class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>>pq;
        for(auto it:nums)
        {
            pq.push(it);
        }
        int ans=0;
        while(pq.size()>1 and pq.top()<k)
        {
            ans++;
            long long f=pq.top();
            pq.pop();
            long long s=pq.top();
            pq.pop();
            pq.push(min(f, s)*2 + max(f, s));
        }
        
        return ans;
        
    }
};
