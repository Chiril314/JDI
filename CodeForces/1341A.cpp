#include <iostream>

using namespace std;

bool isConsistent(int n, int a, int b, int c, int d){
    int minWeight = n * (a - b);
    int maxWeight = n * (a + b);

    int minPackage = c - d;
    int maxPackage = c + d;

    return !(maxWeight < minPackage || minWeight > maxPackage);
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        if(isConsistent(n, a, b, c, d)){
            cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }
    }

    return 0;
}