class Solution {
public:
    long long calculateScore(string s) {
        long long score = 0;
        unordered_map<char, stack<int>> mirrorMap;
        
        for (int i = 0; i < s.size(); ++i) {
            char mirrorChar = 'z' - (s[i] - 'a');
            if (!mirrorMap[mirrorChar].empty()) {
                score += i - mirrorMap[mirrorChar].top();
                mirrorMap[mirrorChar].pop();
            } else {
                mirrorMap[s[i]].push(i);
            }
        }
        return score;
    }
};

