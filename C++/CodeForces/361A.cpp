#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            if(i == j)
                cout << k << ' ';
            else
                cout << 0 << ' ';
        cout << endl;
    }

    return 0;
}