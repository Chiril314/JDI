#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, q;
    cin >> n >> q;

    vector<long long> a(n), b(n + 1);
    b[0] = 0;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        b[i + 1] = b[i] + a[i];
    }

    while(q--){
        long long x, y;
        cin >> x >> y;

        cout << b[y] - b[x - 1] << endl;
    }

    return 0;
}