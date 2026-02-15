#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> c(n), a(m);
    for(int i = 0; i < n; i++)
        cin >> c[i];

    for(int i = 0; i < m; i++)
        cin >> a[i];

    int ind = 0, b = 0;
    for(int i = 0; i < n; i++){
        if(ind >= m)
            break;

        if(a[ind] >= c[i]){
            b++;
            ind++;
        }
    }

    cout << b;

    return 0;
}