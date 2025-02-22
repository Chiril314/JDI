#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int x[n], d[n], xd[n];
    for(int i = 0; i < n; i++){
        cin >> x[i] >> d[i];
        xd[i] = x[i] + d[i];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(xd[i] == x[j] && xd[j] == x[i]){
                cout << "YES";

                return 0;
            }
        }
    }

    cout << "NO";

    return 0;
}