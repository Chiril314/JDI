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

        int cnt = 0;
        for(int i = 1; i < n; i++)
            if(a[i] < a[i - 1])
                cnt++;

        if(cnt >= n - 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}