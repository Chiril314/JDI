#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int i = 0;
        while(n--){
            if(i == k)
                i = 0;
            cout << char('a' + i);
            i++;
        }
        cout << endl;
    }

    return 0;
}