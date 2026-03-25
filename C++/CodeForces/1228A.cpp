#include <iostream>
#include <vector>

using namespace std;

bool distinct(int num){
    vector<bool> seen(10, false);

    while(num > 0){
        int digit = num % 10;
        if (seen[digit]) return false; 
        seen[digit] = true;
        num /= 10;
    }

    return true;
}

int main(){
    int l, r;
    cin >> l >> r;

    for(int x = l; x <= r; x++){
        if(distinct(x)){
            cout << x;
            return 0;
        }
    }

    cout << -1;

    return 0;
}