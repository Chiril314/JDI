#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int cnt1 = 0;
    bool flag = true;
    while(flag){
        a--;
        b--;
        cnt1++;
        if(a == 0){
            break;
        }
        if(b == 0){
            break;
        }
    }

    int cnt2 = 0;
    if(a == 0){
        while(b >= 2){
            b -= 2;
            cnt2++;
        }
    } else if(b == 0){
        while(a >= 2){
            a -= 2;
            cnt2++;
        }
    }

    cout << cnt1 << ' ' << cnt2;

    return 0;
}