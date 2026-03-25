#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int i = 0; i <= 1e4; i++)
        for(int j = 0; j <= 1e4; j++)
            if(a * i + b == c * j + d){
                cout << a * i + b;
                return 0;
            }

    cout << -1;

    return 0;
}