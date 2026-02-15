#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i]--;
    }

    vector<int> ans(n);
    for(int i = 0; i < n; i++){
        vector<int> v(n, 0);
        int c = i;

        while(true){
            if(v[c]){
                ans[i] = c + 1;
                break;
            } 

            v[c] = 1;
            c = a[c];
        }
    }

    for(int i = 0; i < n; i++)
        cout << ans[i] << ' ';

    return 0;
}