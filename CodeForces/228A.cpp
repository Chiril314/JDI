#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int s[4], cnt = 0;

    for(int i = 0; i < 4; i++){
        cin >> s[i];
    }

    sort(s, s + 4);

    for(int i = 0; i < 4; i++){
        if(s[i] == s[i + 1]){   
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}