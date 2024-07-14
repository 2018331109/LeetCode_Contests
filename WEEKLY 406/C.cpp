class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        // Sort both the horizontal and vertical cuts in descending order
        sort(horizontalCut.rbegin(), horizontalCut.rend());
        sort(verticalCut.rbegin(), verticalCut.rend());

        int horizontalPieces = 1, verticalPieces = 1;
        int totalCost = 0;
        int i = 0, j = 0;

        // Use a greedy approach to process the largest cuts first
        while (i < horizontalCut.size() && j < verticalCut.size()) {
            if (horizontalCut[i] > verticalCut[j]) {
                totalCost += horizontalCut[i] * verticalPieces;
                horizontalPieces++;
                i++;
            } else {
                totalCost += verticalCut[j] * horizontalPieces;
                verticalPieces++;
                j++;
            }
        }

        // Add remaining horizontal cuts
        while (i < horizontalCut.size()) {
            totalCost += horizontalCut[i] * verticalPieces;
            horizontalPieces++;
            i++;
        }

        // Add remaining vertical cuts
        while (j < verticalCut.size()) {
            totalCost += verticalCut[j] * horizontalPieces;
            verticalPieces++;
            j++;
        }

        return totalCost;
    }
};
