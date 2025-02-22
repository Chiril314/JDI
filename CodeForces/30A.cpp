#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;

    for(int i = -1000; i <= 10000; i++){
        if(a * pow(i, n) == b){
            cout << i;

            return 0;
        }
    }

    cout << "No solution";

    return 0;
}