#include <iostream>

using namespace std;

int  main(){
    int n;
    cin >> n;

    int p, q, cnt = 0;
    while(n--){
        cin >> p >> q;

        if(q - 2 >= p){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}