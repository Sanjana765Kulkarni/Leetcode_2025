// Last updated: 03/03/2026, 20:06:15
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int sgn(int x) {
    if (x < 0) return -1;
    if (x > 0) return 1;
    return 0;
}

class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {

        // directions in the same order I'll use later
        int drs[8] = {-1, -1,  0,  1, 1,  1,  0, -1}; // N, NE, E, SE, S, SW, W, NW
        int dcs[8] = { 0,  1,  1,  1, 0, -1, -1, -1};

        vector<int> bestDist(8, INT_MAX);
        vector<vector<int>> bestQ(8); // store closest queen for each direction

        int r = queens.size();
        int kr = king[0];
        int kc = king[1];

        for (int i = 0; i < r; i++)
        {
            int qr = queens[i][0];
            int qc = queens[i][1];

            int dr = qr - kr;
            int dc = qc - kc;

            // aligned? same row, same column, or diagonal
            if (dr == 0 || dc == 0 || abs(dr) == abs(dc)) {

                int rdir = sgn(dr);
                int cdir = sgn(dc);

                // find direction index (0..7)
                int idx = -1;
                for (int d = 0; d < 8; d++) {
                    if (drs[d] == rdir && dcs[d] == cdir) {
                        idx = d;
                        break;
                    }
                }
                if (idx == -1) continue; // safety

                // distance (number of steps from king to queen)
                int dist = max(abs(dr), abs(dc));

                if (dist < bestDist[idx]) {
                    bestDist[idx] = dist;
                    bestQ[idx] = {qr, qc};
                }
            }
        }

        // collect results in direction order (like above)
        vector<vector<int>> res;
        for (int d = 0; d < 8; d++) {
            if (!bestQ[d].empty()) res.push_back(bestQ[d]);
        }

        return res;
    }
};
