#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n];
    for(long long i = 0; i < n; i++){ 
        cin >> a[i];
    }

    sort(a, a + n);

    for(long long i = 0; i < n; i++){
        if(a[i] != i + 1){
            cout << i + 1;
            return 0;
        }
    }

    cout << n + 1;
    
    return 0;
}
