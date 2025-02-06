#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n], sum = 0;
        int oddCnt = 0, evenCnt = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];

            if (a[i] % 2 == 0)
                evenCnt++;
            else
                oddCnt++;
        }

        if(sum % 2 == 1){
            cout << "YES" << endl;
        } else if(oddCnt > 0 && evenCnt > 0){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }

    return 0;
}