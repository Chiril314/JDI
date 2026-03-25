#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long x = 0, y = 0, d, k, i = 0;
        cin >> d >> k;

        while(true)
            if(x <= y && (x + k) * (x + k) + y * y <= d * d)
                x += k;
            else if(x > y && (y + k) * (y + k) + x * x <= d * d)
                y += k;
            else 
                break;

        if(x == y)
            cout << "Utkarsh" << endl;
        else
            cout << "Ashish" << endl;        
    }

    return 0;
}