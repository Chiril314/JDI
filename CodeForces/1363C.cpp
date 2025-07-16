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
        int n, x;
        cin >> n >> x;

        x--;
        vector<int> a(n, 0);

        if(n == 1){
            cout << "Ayush" << endl;
            continue;
        }

        for(int i = 0; i < n - 1; i++){
            int b, c;
            cin >> b >> c;

            a[b - 1]++;
            a[c - 1]++;
        }

        if(a[x] <= 1){
            cout << "Ayush" << endl;
            continue;
        }

        if(n % 2 == 1)
            cout << "Ashish" << endl;
        else
            cout << "Ayush" << endl;
    }

    return 0;
}