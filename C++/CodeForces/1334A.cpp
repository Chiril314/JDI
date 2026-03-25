#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int p[n], c[n];
        for(int i = 0; i < n; i++)
            cin >> p[i] >> c[i];

        bool flag = true;
        if(c[0] > p[0])
            flag = false;

        for(int i = 1; i < n; i++)
            if(p[i] < p[i - 1] || c[i] < c[i - 1]){ 
                flag = false;
                break;
            } else if(c[i] > p[i]) { 
                flag = false;
                break;
            } else if(c[i] - c[i - 1] > p[i] - p[i - 1]){ 
                flag = false;
                break;
            }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}