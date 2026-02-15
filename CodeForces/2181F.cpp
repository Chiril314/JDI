#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    cin >> t;

    while(t--){
        long long n, cnt = 0;
        cin >> n;

        bool flag = false;
        for(long long i = 0; i < n; i++){
            long long x;
            cin >> x;

            if(x == 1)
                cnt++;
            else{
                cnt += 2;
                if(!flag)
                    flag = true;
            }
        }

        if(flag)
            cnt--;

        if(cnt % 2 == 0)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;   
    }

    return 0;
}