#include <iostream>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long a, b, n, s;
        cin >> a >> b >> n >> s;

        long long check = min(a, s / n); 
        s -= check * n;

        if(s <= b){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
