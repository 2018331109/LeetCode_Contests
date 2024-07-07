class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> result;
        generateValidStrings("", n, result);
        return result;
    }
    
private:
    void generateValidStrings(string current, int n, vector<string>& result) {
        if (current.length() == n) {
            result.push_back(current);
            return;
        }
        
        if (current.empty() || current.back() == '1') {
            generateValidStrings(current + '0', n, result);
            generateValidStrings(current + '1', n, result);
        } else {
            generateValidStrings(current + '1', n, result);
        }
    }
};
