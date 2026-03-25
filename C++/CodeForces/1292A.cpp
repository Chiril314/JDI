#include <iostream>

using namespace std;

const int N = 1e5;
bool l[2][N];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int n, t, flag = 0;
    cin >> n >> t;

    while(t--){
        int x, y, a;
        cin >> x >> y;

        x--;
        y--;
        if(l[x][y] == false)
            a = 1;
        else  
            a = -1;

        l[x][y] = !l[x][y];
        for(int i = -1; i <= 1; i++){
            if(i + y < 0 || y + i >= n)
                continue;

            if(l[1 - x][y + i])
                flag += a;
        }

        if(flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}