class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxLength = 0;
        for (int i = 0; i < s.length(); ++i) {
            for (int j = i; j < s.length(); ++j) {
                if (isValidSubstring(s, i, j)) {
                    maxLength = max(maxLength, j - i + 1);
                }
            }
        }
        return maxLength;
    }

private:
    bool isValidSubstring(const string& s, int start, int end) {
        unordered_map<char, int> freq;
        for (int i = start; i <= end; ++i) {
            freq[s[i]]++;
            if (freq[s[i]] > 2) {
                return false;
            }
        }
        return true;
    }
};


