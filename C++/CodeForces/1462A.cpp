#include <iostream>
#include <vector>

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

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        vector<bool> flag(n, false);
        for(int i = 0; i < n; i++){
            if(!flag[i])
                cout << a[i] << ' ';
            
            flag[i] = true;
            if(!flag[n - 1 - i])
                cout << a[n - 1 - i] << ' ';
            
            flag[n - 1 - i] = true;
        }
        
        cout << endl;
    }

    return 0;
}