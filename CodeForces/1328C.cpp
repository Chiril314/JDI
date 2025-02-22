#include <iostream>

using namespace std;
 
int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        char c[n];
        for(int i = 0; i < n; i++)
            cin >> c[i];

        char a[n], b[n];
        int cnt = 0;

        a[0] = '1';
        b[0] = '1';
        for(int i = 1;i<n;i++){
            if(c[i] == '0'){
                a[i] = '0';
                b[i] = '0';
            }
            
            if(cnt < 1){
                if(c[i] == '1'){
                    a[i] = '1';
                    cnt++;
                    b[i] = '0';
                }

                if(c[i] == '2'){
                    a[i] = '1';
                    b[i] = '1';
                }
            } else{
                if(c[i] == '1'){
                    a[i] = '0';
                    b[i] = '1';
                }

                if(c[i] == '2'){
                    b[i] = '2';
                    a[i] = '0';
                }
            }
        }

        for(int i = 0; i < n; i++)
            cout << a[i];

        cout << endl;
        for(int i = 0; i < n; i++)
            cout << b[i];
        
        cout << endl;
    }
 
    return 0;
}