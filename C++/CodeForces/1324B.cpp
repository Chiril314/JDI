#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> a(n);
        vector<long long> check(5001, 0);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
            check[a[i]]++;
        }    

        bool flag = false;
        for(long long i = 0; i < n; i++){
            if(check[a[i]] > 1)
                for(long long j = i + 2; j < n; j++){
                    if(a[i] == a[j]){
                        flag = true;
                        break;
                    }
                }
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}