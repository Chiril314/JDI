#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;

    int n;
    while(k--){
        cin >> n;
        int arr[2000];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<int>());

        int cnt = 0;

        for(int i = 0; i < n; i++){
            cnt++;

            if(cnt == arr[i]){
                cout << cnt << endl;
                break;
            } else if(cnt > arr[i]){
                cnt = 0;
                for(int j = 0; j < i; j++){
                    cnt++;
                    if(j == i-1){
                        cout << cnt << endl;
                    }
                }
                break;
            }
        }
    }

    return 0;
}