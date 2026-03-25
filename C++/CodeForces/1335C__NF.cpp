#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a, a + n);

        int new_size = n;
        for(int i = 0; i < new_size - 1; i++){
            if(a[i] == a[i + 1]){
                for(int j = i + 1; j < new_size - 1; j++){
                    a[j] = a[j + 1];
                }
                new_size--;
                i--;

                if(new_size <= n / 2){
                    break;
                }
            }
        }

        if(n - new_size == 0){
            cout << min(1, n - 1) << endl;
        } else{
            cout << min(new_size, n - new_size) << endl;    
        }
    }

    return 0;
}