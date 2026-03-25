#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], l = -1, r = -1;
    for(int i = 0; i < n; i++){
        cin >> a[i];

        if(a[i] != i + 1){
            if(l == -1)
                l = i + 1;  

            r = i + 1;  
        }
    }

    if(l == -1)
        cout << "0 0";
    else{
        for (int i = 0; i < (r - l + 1) / 2; i++) {
            int temp = a[l - 1 + i];
            a[l - 1 + i] = a[r - 1 - i];
            a[r - 1 - i] = temp;
        }

        bool flag = true;
        for(int i = 0; i < n; i++){
            if(a[i] != i + 1){
                flag = false;
                break;
            }
        }

        if(flag)
            cout << l << ' ' << r;
        else
            cout << "0 0";
    }

    return 0;
}