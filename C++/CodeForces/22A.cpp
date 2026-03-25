#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    int check = a[0];

    for(int i = 0; i < n; i++){
        if(a[i] > check){
            cout << a[i];

            return 0;
        }
    }

    cout << "NO";

    return 0;
}