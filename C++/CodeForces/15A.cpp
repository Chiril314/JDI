#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    int x[n], a[n];

    for(int i = 0; i < n; i++){
        cin >> x[i] >> a[i];
    }

    for(int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (x[j] > x[j + 1]){
                swap(x[j], x[j + 1]);
                swap(a[j], a[j + 1]);
            }
        }
    }

    if(x[0] < 0){
        int temp = x[0];
        for(int i = 0; i < n; i++){
            x[i] += abs(temp);
        }
    }

    int ans = 0;

    for(int i = 0; i < n - 1; i++){
        double Current = double(x[i] + double(a[i] - 1) / 2);
        double Next = double(x[i + 1] - double(a[i + 1]) / 2);

        double d = Next - Current - 0.5;

        if(d > double(t)){
            ans += 2;
        } else if(d == double(t)){
            ans += 1; 
        }
    }

    cout << ans + 2;

    return 0;
}