#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

static long long *G;  // packed array: [r0,x0,r1,x1,...]

static bool cmpIndex(int i, int j) {
    long long ri = G[2 * i];
    long long rj = G[2 * j];
    if (ri != rj) return ri < rj;
    return G[2 * i + 1] < G[2 * j + 1];
}

static long long myAbs(long long v) {
    return v < 0 ? -v : v;
}

static long long myMin(long long a, long long b) {
    return a < b ? a : b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, M, A, B;
    cin >> N >> M >> A >> B;

    long long L = B * (M + 1);

    int Q;
    cin >> Q;

    while (Q--) {
        int k;
        cin >> k;

        vector<long long> packed;
        packed.resize(2 * (long long)k);

        for (int i = 0; i < k; i++) {
            long long r, c;
            cin >> r >> c;
            packed[2 * i] = r;
            packed[2 * i + 1] = c * B;
        }

        G = packed.data();

        vector<int> idx;
        idx.resize(k);
        for (int i = 0; i < k; i++) idx[i] = i;

        sort(idx.begin(), idx.end(), cmpIndex);

        // compress rows -> rows[], left[], right[]
        vector<long long> rows;
        vector<long long> left;
        vector<long long> right;

        int p = 0;
        while (p < k) {
            int id0 = idx[p];
            long long rr = G[2 * id0];
            long long mn = G[2 * id0 + 1];
            long long mx = mn;

            int q = p + 1;
            while (q < k) {
                int id = idx[q];
                if (G[2 * id] != rr) break;
                long long xx = G[2 * id + 1];
                if (xx < mn) mn = xx;
                if (xx > mx) mx = xx;
                q++;
            }

            rows.push_back(rr);
            left.push_back(mn);
            right.push_back(mx);

            p = q;
        }

        int sz = (int)rows.size();
        const long long INF = (long long)4e18;

        vector<long long> dpL(sz, INF); // end at left[i]
        vector<long long> dpR(sz, INF); // end at right[i]

        // initialization: start at row 0, x=0; go to row rows[0], collect interval [left,right]
        {
            long long w = right[0] - left[0];
            long long dL = left[0];   // abs(0 - left)
            long long dR = right[0];  // abs(0 - right)

            // end at left: min(go to left first then backtrack, go to right first then sweep back)
            long long costEndLeft = myMin(dL + 2 * w, dR + w);
            // end at right
            long long costEndRight = myMin(dR + 2 * w, dL + w);

            dpL[0] = rows[0] * A + costEndLeft;
            dpR[0] = rows[0] * A + costEndRight;
        }

        for (int i = 1; i < sz; i++) {
            long long vert = (rows[i] - rows[i - 1]) * A;
            long long w = right[i] - left[i];

            // from previous LEFT endpoint
            long long prevX = left[i - 1];
            long long dL = myAbs(prevX - left[i]);
            long long dR = myAbs(prevX - right[i]);
            long long addEndLeft_fromL  = myMin(dL + 2 * w, dR + w);
            long long addEndRight_fromL = myMin(dR + 2 * w, dL + w);

            // from previous RIGHT endpoint
            prevX = right[i - 1];
            dL = myAbs(prevX - left[i]);
            dR = myAbs(prevX - right[i]);
            long long addEndLeft_fromR  = myMin(dL + 2 * w, dR + w);
            long long addEndRight_fromR = myMin(dR + 2 * w, dL + w);

            long long candL1 = dpL[i - 1] + vert + addEndLeft_fromL;
            long long candL2 = dpR[i - 1] + vert + addEndLeft_fromR;
            dpL[i] = myMin(candL1, candL2);

            long long candR1 = dpL[i - 1] + vert + addEndRight_fromL;
            long long candR2 = dpR[i - 1] + vert + addEndRight_fromR;
            dpR[i] = myMin(candR1, candR2);
        }

        // return to checkout: row 0, x = L
        long long lastRow = rows[sz - 1];
        long long ans1 = dpL[sz - 1] + lastRow * A + myAbs(L - left[sz - 1]);
        long long ans2 = dpR[sz - 1] + lastRow * A + myAbs(L - right[sz - 1]);
        long long ans = myMin(ans1, ans2);

        cout << ans << "\n";
    }

    return 0;
}
