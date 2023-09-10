class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int dx = abs(fx - sx);
        int dy = abs(fy - sy);

        int minMoves = max(dx, dy);

        // If t is greater than or equal to minMoves, we can reach the end cell within t or fewer moves.
        if(dx+dy==0 && t==1)
        {
            return false;
        }
        return t >= minMoves;
    }
};
