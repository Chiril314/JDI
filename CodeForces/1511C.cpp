#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> p(51, 0);
    for(int i = 0; i < n; i++)
        if(p[a[i]] == 0)
            p[a[i]] = i + 1;

    while(q--){
        int t;
        cin >> t;

        int c = p[t];
        cout << c << ' ';

        for(int i = 1; i <= 50; i++)
            if(p[i] && p[i] < c)
                p[i]++;

        p[t] = 1;
    }

    return 0;
}