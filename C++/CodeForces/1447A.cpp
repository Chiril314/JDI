#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        cout << n << endl;
        for(int i = 0; i < n; i++)
            cout << i + 1 << ' ';
        
        cout << endl;
    }

    return 0;
}