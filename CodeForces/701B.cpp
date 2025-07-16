#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m, cntr = 0, cntc = 0;
    cin >> n >> m;

    vector<bool> r(n, false), c(n, false);
    for(long long i = 0; i < m; i++){
        long long x, y;
        cin >> x >> y;

        if(!r[x - 1]){
            r[x - 1] = true;
            cntr++;
        }

        if(!c[y - 1]){
            c[y - 1] = true;
            cntc++;
        }

        cout << n * n - (cntr * n + cntc * n - cntr * cntc) << ' ';
    }

    return 0;
}