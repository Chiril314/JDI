#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a, a + n);

        if(n % 2 != 0 && n != 1){
            for(int i = 0; i < n - 1; i++){
                a[i] = a[i + 1];
            }
            n--;
        } 

        sort(a, a + n, greater<int>());

        int team1[n / 2], team2[n / 2];

        for(int i = 0; i < n; i++){
            if(i < n / 2){
                team1[i] = a[i]; 
            } else{
                team2[i - n / 2] = a[i];
            }
        }

        for(int i = 0; i < n / 2; i++){
            cout << team1[i] << " " << team2[i] << endl;
        }

        cout << endl;
    }

    return 0;
}