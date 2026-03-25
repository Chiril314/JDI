#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, c;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0)
            c = a[i];
        else
            c = min(a[i], c);
    }

    int ans = 1e9, check = -1;
    for(int i = 0; i < n; i++)
        if(a[i] == c){
            if(check != -1)
                ans = min(ans, i - check);
            check = i;
        }

    cout << ans;

    return 0;
}