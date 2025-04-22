#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int cnt = 1;
    for(int i = 0; i < n - 1; i++)
        if(a[i] != a[i + 1])
            cnt++;

    if(cnt > 3)
        cout << "NO";
    else if(cnt == 1 || cnt == 2)
        cout << "YES";
    else if(cnt == 3){
        int a1 = a[0], a2 = -1, a3 = -1;
        for(int i = 1; i < n; i++){
            if(a[i] != a1 && a2 == -1)
                a2 = a[i];
            else if(a2 != -1 && a[i] != a2 && a[i] != a1)
                a3 = a[i];

            if(a1 != -1 && a2 != -1 && a3 != -1)
                break;

        }

        if(a3 - a2 == a2 - a1)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}