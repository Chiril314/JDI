#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        cout << max((min(a, b) * 2), max(a, b)) * max((min(a, b) * 2), max(a, b)) << endl;
    }

    return 0;
}