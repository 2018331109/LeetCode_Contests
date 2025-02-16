#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        vector<int> yCoords;
        for (auto &sq : squares) {
            yCoords.push_back(sq[1]);
            yCoords.push_back(sq[1] + sq[2]);
        }
        
        sort(yCoords.begin(), yCoords.end());
        yCoords.erase(unique(yCoords.begin(), yCoords.end()), yCoords.end());

        double low = yCoords.front(), high = yCoords.back();
        
        auto computeArea = [&](double y) {
            double areaAbove = 0.0, areaBelow = 0.0;
            for (auto &sq : squares) {
                double bottom = sq[1], top = (double)sq[1] + sq[2];
                double side = (double)sq[2];

                if (y >= top) {
                    areaBelow += side * side;
                } else if (y <= bottom) {
                    areaAbove += side * side;
                } else {
                    double belowPart = (y - bottom) * side;
                    double abovePart = (top - y) * side;
                    areaBelow += belowPart;
                    areaAbove += abovePart;
                }
            }
            return make_pair(areaBelow, areaAbove);
        };

        while (high - low > 1e-6) {
            double mid = (low + high) / 2.0;
            auto [areaBelow, areaAbove] = computeArea(mid);
            if (areaBelow < areaAbove) low = mid;
            else high = mid;
        }

        return low;
    }
};

