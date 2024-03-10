#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::vector<std::string> shortestSubstrings(std::vector<std::string>& arr) {
        std::vector<std::string> result;

        for (int i = 0; i < arr.size(); ++i) {
            std::string currentString = arr[i];
            std::string shortestUncommon = "";

            for (int j = 0; j < currentString.length(); ++j) {
                for (int len = 1; j + len <= currentString.length(); ++len) {
                    std::string substring = currentString.substr(j, len);

                    // Check if the substring is unique in other strings
                    if (isUnique(substring, arr, i)) {
                        // Update the result if the current substring is shorter or lexicographically smaller
                        if (shortestUncommon.empty() || substring.length() < shortestUncommon.length() ||
                            (substring.length() == shortestUncommon.length() && substring < shortestUncommon)) {
                            shortestUncommon = substring;
                        }
                    }
                }
            }
            result.push_back(shortestUncommon);
        }

        return result;
    }

private:
    bool isUnique(const std::string& substring, const std::vector<std::string>& arr, int currentIndex) const {
        for (int i = 0; i < arr.size(); ++i) {
            if (i != currentIndex && arr[i].find(substring) != std::string::npos) {
                return false;
            }
        }
        return true;
    }
};

