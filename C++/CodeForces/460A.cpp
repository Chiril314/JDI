#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int i = 1, cnt = 0;
    while(n > 0){
        n--;
        cnt++;
        if(i % m == 0){
            n++;
        }
        i++;
    }

    cout << cnt;

    return 0;
}