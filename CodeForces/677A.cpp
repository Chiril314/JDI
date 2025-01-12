#include <iostream>

using namespace std;

int main(){
    int n, h;
    cin >> n >> h;

    int a, cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a <= h){
            cnt += 1;
        } else{
            cnt += 2;
        }
    }

    cout << cnt;

    return 0;
}