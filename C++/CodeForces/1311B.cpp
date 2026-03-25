#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }

        int p[m];
        for(int i = 0; i < m; i++){
            cin >> p[i];
            p[i]--;
        }

        sort(b, b + n);
        
        int check;
        while(true){
            check = 0;
            for(int i = 0; i < m; i++)
                if(a[p[i]] > a[p[i] + 1]){
                    swap(a[p[i]], a[p[i] + 1]);
					check++;
                }

            if(check == 0)
                break;
        }

        bool flag = true;
        for(int i = 0; i < n; i++)
            if(a[i] != b[i]){
                flag = false;
            }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}