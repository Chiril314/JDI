#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int s[n];
        for(int i = 0; i < n; i++)
            cin >> s[i];

        sort(s, s + n);

        int check;
        for(int i = 0; i < n - 1; i++){
            if(i == 0)
                check = s[i + 1] - s[i];
            else
                if(s[i + 1] - s[i] < check)
                    check = s[i + 1] - s[i];
        }

        cout << check << endl;
    }

    return 0;
}