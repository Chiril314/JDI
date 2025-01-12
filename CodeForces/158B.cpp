#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;

    for(int i = 0; i < n; i++){
        int s;
        cin >> s;

        if(s == 1){
            cnt1++;
        } else if(s == 2){
            cnt2++;
        } else if(s == 3){
            cnt3++;
        } else if(s == 4){
            cnt4++;
        }
    }

    int taxis = cnt4;

    int group13 = min(cnt1, cnt3);
    taxis += group13;
    cnt1 -= group13;
    cnt3 -= group13;

    taxis += cnt3;

    taxis += cnt2 / 2;
    if(cnt2 % 2 != 0){
        taxis++;
        cnt1 = max(0, cnt1 - 2);
    }

    taxis += (cnt1 + 3) / 4;
    cout << taxis; 
    
    return 0;
}