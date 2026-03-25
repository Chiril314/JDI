#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++){
            int cnt = 0, check = i + 1, index = a[i], temp = n;
            while(temp--){
                cnt++;
                if(index == check)
                    break;

                index = a[index - 1];
            }

            cout << cnt << ' ';
        }

        cout << endl;
    }

    return 0;
}