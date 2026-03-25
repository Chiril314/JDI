#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int d[m];
    for(int i = 0; i < m; i++)
        cin >> d[i];

    sort(d, d + m);
    if(d[0] == 1 || d[m - 1] == n)
        cout << "NO";
    else{
        for(int i = 0; i < m; i++){
            if(d[i] == d[i + 1] - 1 && d[i] == d[i + 2] - 2){
                cout << "NO";
                return 0;
            }
        }

        cout << "YES";
    }

    return 0;
}