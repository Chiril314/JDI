#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<pair<int, int>> package(n);

        for(int i = 0; i < n; i++)
            cin >> package[i].first >> package[i].second;

        sort(package.begin(), package.end());

        string path = "";
        int checkX = 0, checkY = 0;
        bool possible = true;

        for (int i = 0; i < n; i++){
            int x = package[i].first;
            int y = package[i].second;

            if(x < checkX || y < checkY){
                possible = false;
                break;
            }

            path += string(x - checkX, 'R');
            checkX = x;

            path += string(y - checkY, 'U');
            checkY = y;
        }

        if(possible)
            cout << "YES" << endl << path << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}