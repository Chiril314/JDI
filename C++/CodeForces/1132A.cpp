#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cnt1, cnt2, cnt3, cnt4;
    cin >> cnt1 >> cnt2 >> cnt3 >> cnt4;

    if(cnt1 == 0 && cnt3 != 0){
        cout << 0;
        return 0;
    }

    cout << bool(cnt1 == cnt4);

    return 0;
}