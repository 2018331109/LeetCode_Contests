class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        unordered_map<int, long long> mp; // To store frequencies of IDs
        multiset<long long> freqSet; // To keep track of frequencies in sorted order
        vector<long long> ans;

        for (int i = 0; i < nums.size(); ++i) {
            int id = nums[i];
            long long frequency = freq[i];

            // Remove previous frequency from the set
            if (mp[id] > 0)
                freqSet.erase(freqSet.find(mp[id]));

            // Update frequency
            mp[id] += frequency;

            // Insert new frequency into the set
            freqSet.insert(mp[id]);

            // The most frequent ID is the last element in the set
            ans.push_back(*freqSet.rbegin());
        }

        return ans;
    }
};
