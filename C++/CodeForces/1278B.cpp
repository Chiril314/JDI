#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        int d = max(a, b) - min(a, b), i = 0;
        while(true){
            if((i * (i + 1)) / 2 >= d && ((i * (i + 1)) / 2) % 2 == d % 2){
                cout << i << endl;
                break;
            }

            i++;
        }
    }

    return 0;
}