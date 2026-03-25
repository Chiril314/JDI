#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, sa = 0, sg = 0, a, g;
    cin >> n;

    string ans = "";
    for(int i = 0; i < n; i++){
        cin >> a >> g;
        if(sa + a - sg <= 500){
            ans += 'A';
            sa += a;
        } else{
            ans += 'G';
            sg += g;
        }
    }

    if(abs(sa - sg) > 500)
        cout << -1;
    else
        cout << ans;

    return 0;
}