#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        if((a + b) % 3 != 0){
            cout << "NO\n";
            continue;
        }
        
        if(max(a, b) > 2 * min(a, b)){
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }

    return 0;
}