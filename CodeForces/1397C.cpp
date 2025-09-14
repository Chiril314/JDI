#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    if(n == 1){
        cout << "1 1\n" << -a[0] << "\n1 1\n0\n1 1\n0";
        return 0;
    }

    cout << "1 " << n << endl;
    for(long long i = 0; i < n - 1; i++)
        cout << (-a[i]) * n << ' ';

    cout << "0\n1 " << n - 1 << endl;
    for(long long i = 0; i < n - 1; i++)
        cout << (1 - n) * (-a[i]) << ' ';

    cout << endl << n << ' ' << n << endl << -a[n - 1];

    return 0;
}