#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], b[n], c[n];
    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i];

    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            int cnt = 0;    
            if(a[i] == a[j])
                cnt++;
            if(b[i] == b[j])
                cnt++;
            if(c[i] == c[j])
                cnt++;

            if(cnt == 1)
                ans++;
        }

    }

    cout << ans;

    return 0;
}