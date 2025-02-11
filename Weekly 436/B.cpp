class Solution {
public:
    vector<int> assignElements(vector<int>& groups, vector<int>& elements) {
        vector<int> assigned(groups.size(), -1);
        vector<int> smallestIndex(100001, -1);
        
        for (int i = 0; i < elements.size(); i++)
            if (smallestIndex[elements[i]] == -1)
                smallestIndex[elements[i]] = i;
        
        for (int i = 0; i < groups.size(); i++) {
            int bestIndex = -1;
            for (int d = 1; d * d <= groups[i]; d++) {
                if (groups[i] % d == 0) {
                    if (smallestIndex[d] != -1 && (bestIndex == -1 || smallestIndex[d] < bestIndex))
                        bestIndex = smallestIndex[d];
                    int other = groups[i] / d;
                    if (other != d && smallestIndex[other] != -1 && (bestIndex == -1 || smallestIndex[other] < bestIndex))
                        bestIndex = smallestIndex[other];
                }
            }
            assigned[i] = bestIndex;
        }
        return assigned;
    }
};

