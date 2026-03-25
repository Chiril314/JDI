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
    
        if(a[0]){
            cout << n + 1 << ' ';
            for(int i = 0; i < n; i++)
                cout << i + 1 << ' ';
            cout << endl;
        } else if(!a[n - 1]){
            for(int i = 0; i < n; i++)
                cout << i + 1 << ' ';
            cout << n + 1 << endl;
        } else{
            int x = -1;
            for(int i = 0; i < n; i++)
                if(i + 1 < n && !a[i] && a[i + 1]){
                    x = i + 1;
                    break;
                }
            
            if(x != -1){
                for(int i = 0; i < x; i++)
                    cout << i + 1 << ' ';

                cout << n + 1 << ' ';
                for(int i = x; i < n; i++)
                    cout << i + 1 << ' ';
                cout << endl;
            } else
                cout << -1 << endl;
        }
    }

    return 0;
}