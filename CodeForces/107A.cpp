#include <iostream>

using namespace std;

int main(){
    int n, p;
    cin >> n >> p;

    int in[1001] = {0}, out[1001] = {0}, diam[1001] = {0};
    for(int i = 0; i < p; i++){
        int a, b, d;
        cin >> a >> b >> d;

        out[a] = b;
        in[b] = a;
        diam[a] = d;
    }

    int ans[1000][3], t = 0;
    const int Large = 1000001;

    for(int i = 0; i <= n; i++){
        if(in[i] == 0 && out[i] != 0){
            int current = i,  tank = i, min_diameter = Large;

            while(out[current] != 0){
                min_diameter = min(min_diameter, diam[current]);
                current = out[current];
            }

            int tap = current;

            ans[t][0] = tank;
            ans[t][1] = tap;
            ans[t][2] = min_diameter;
            t++;
        }
    }

    cout << t;

    for(int i = 0; i < t; i++){
        cout << endl << ans[i][0] << ' ' << ans[i][1] << ' ' << ans[i][2];
    }

    return 0;
}