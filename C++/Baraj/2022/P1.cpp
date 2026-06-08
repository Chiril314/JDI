#include <iostream>
#include <vector>

using namespace std;

bool good(const vector<int>& cntL, const vector<int>& cntR, int m){
    int sufL = 0, sufRnext = 0;
    for(int x = m; x >= 1; x--){
        sufL += cntL[x];
        if(sufL > sufRnext)
            return false;
        
        sufRnext += cntR[x];
    }

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m, n;
    cin >> m >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int k = n / 2;

    vector<int> cntL(m + 2, 0);
    for(int i = 0; i < k; i++)
        cntL[a[i]]++;

    vector<int> cntR(m + 2, 0);
    for(int i = k; i < 2 * k; i++)
        cntR[a[i]]++;

    for(int curK = k; curK >= 1; curK--){
        if(good(cntL, cntR, m)){
            cout << curK;
            return 0;
        }

        cntL[a[curK - 1]]--;
        cntR[a[curK - 1]]++;

        cntR[a[2 * curK - 2]]--;
        cntR[a[2 * curK - 1]]--;
    }

    cout << 0;

    return 0;
}