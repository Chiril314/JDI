#include <bits/stdc++.h>

using namespace std;

int main() {
    double percent, progress_bar, n, k, t;

    cin >> n >> k >> t;

    percent = 100 / n; 
    progress_bar = t / percent;

    for(int i = 0; i < n; i++) {
        if(progress_bar >= 1) {
            cout << k << ' ';
            progress_bar -= 1;
        } else if(progress_bar <= 1){
            progress_bar *= k;
            cout << int(progress_bar) << ' ';
            progress_bar = 0;
        } else if(progress_bar == 0){
            cout << "0 ";
        }
    }

    return 0;
}