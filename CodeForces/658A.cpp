#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, c;
    cin >> n >> c;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> b(n);
    for(int i = 0; i < n; i++)
        cin >> b[i];

    int a1 = 0, a2 = 0, x = 0;
    for(int i = 0; i < n; i++){
        x += b[i];
        a1 += max(0, a[i] - c * x);
    }

    x = 0;
    for(int i = n - 1; i >= 0; i--){
        x += b[i];
        a2 += max(0, a[i] - c * x);
    }

    if(a1 > a2)
        cout << "Limak";
    else if(a1 == a2)
        cout << "Tie";
    else
        cout << "Radewoosh";

    return 0;
}