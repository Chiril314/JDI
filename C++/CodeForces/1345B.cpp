#include <iostream>

using namespace std;

int cardsNeeded(int h){
    return (h * (3 * h + 1)) / 2;
}

int countPyramids(int n){
    int count = 0;

    while(n >= 2){ 
        int h = 1;
        while(cardsNeeded(h + 1) <= n){
            h++;
        }
        
        n -= cardsNeeded(h);
        count++;
    }

    return count;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        cout << countPyramids(n) << endl;
    }

    return 0;
}