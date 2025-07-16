#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    long long s = 0, mx = 0;
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        s += a;
        if(a > mx)
            mx = a;
    }

    cout << max(mx, ((s + n - 2) / (n - 1)));

    return 0;
}