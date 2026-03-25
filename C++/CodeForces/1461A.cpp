#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;

        for(int i = 0; i < n; i++)
            cout << "abc"[i % 3];
        
        cout << endl;
    }

    return 0;
}