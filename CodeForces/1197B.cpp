#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n], index;
    for(long long i = 0; i < n; i++){
        cin >> a[i];

        if(a[i] == n)
            index = i;
    }

    for(long long i = 1; i < index; i++)
        if(a[i] < a[i - 1]){
            cout << "NO";
            return 0;
        }

    for(long long i = index + 2; i < n; i++)
        if(a[i] > a[i - 1]){
            cout << "NO";
            return 0;
        }

    cout << "YES";

    return 0;
}