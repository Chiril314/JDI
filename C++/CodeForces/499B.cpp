#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    string a[m], b[m], ab[m];
    for(int i = 0; i < m; i++){
        cin >> a[i] >> b[i];
        if(a[i].size() <= b[i].size())
            ab[i] = a[i];
        else
            ab[i] = b[i];
    }

    string c[n], ans[n];
    for(int i = 0; i < n; i++){
        cin >> c[i];

        for(int j = 0; j < m; j++){
            if(c[i] == a[j] || c[i] == b[j]){
                ans[i] = ab[j];
                break;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << ' ';
    }

    return 0;
}