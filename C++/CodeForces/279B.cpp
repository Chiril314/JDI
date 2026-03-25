#include <iostream>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int maxBooks = 0, check = 0, cnt = 0; 

    for(int r = 0; r < n; r++){
        check += a[r];

        while(check > t){
            check -= a[cnt];
            cnt++;
        }

        maxBooks = max(maxBooks, r - cnt + 1);
    }

    cout << maxBooks;

    return 0;
}