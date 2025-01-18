#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    double p, x;
    for(int i = 0; i < n; i++){
        cin >> p;
        x += (p / 100);
    }

    cout << x / n * 100;

    return 0;
}