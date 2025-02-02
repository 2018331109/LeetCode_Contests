class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;
        int maxOdd = INT_MIN, minEven = INT_MAX;
        for (auto &[c, f] : freq) {
            if (f % 2 == 1) maxOdd = max(maxOdd, f);
            else minEven = min(minEven, f);
        }
        return maxOdd - minEven;
    }
};

