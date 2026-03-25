#include <iostream>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long a, b, c, n;
        cin >> a >> b >> c >> n;

        long long total = a + b + c + n;

        if (total % 3 == 0) {
            long long target = total / 3;
            
            if(max(a, max(b, c)) <= target){
                cout << "YES" << endl;
            } else{
                cout << "NO" << endl;
            }
        } else{
            cout << "NO" << endl;
        }
    }

    return 0;
}