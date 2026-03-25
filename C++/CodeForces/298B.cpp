#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;

    string s;
    cin >> s;

    int ans = 0;
    for(int i = 0; i < t; i++){
        if(sx == ex && sy == ey)
            break;

        if(s[i] == 'N' && sy < ey)
            sy++;
        else if(s[i] == 'S' && sy > ey)
            sy--;
        else if(s[i] == 'W' && sx > ex)
            sx--;
        else if(s[i] == 'E' && sx < ex)
            sx++;

        ans++;
    }

    if(sx != ex || sy != ey)
        cout << -1;
    else
        cout << ans;

    return 0;
}