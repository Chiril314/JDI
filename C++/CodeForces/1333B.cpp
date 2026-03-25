#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b(n);
        for(int i = 0; i < n; i++)
            cin >> b[i];

        int i = 0;
        for(int check1 = 0, check2 = 0; i < n; i++){
            if((a[i] < b[i] && !check1) || (a[i] > b[i] && !check2))
                break;

            if(a[i] == 1)
                check1 = 1;
            else if(a[i] == -1)
                check2 = 1;
        }

        if(i == n)  
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}