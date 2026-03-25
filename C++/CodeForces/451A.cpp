#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int ans = min(m, n);

    if(ans % 2 == 0){
        cout << "Malvika";
    } else{
        cout << "Akshat";
    }

    return 0;
}