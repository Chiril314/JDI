#include <iostream>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    set<int> moves;
    for(int i = 0; i < n; i++){
        string row;
        cin >> row;

        int g = row.find('G'), s = row.find('S');
        int d = s - g;

        if(d < 0){
            cout << -1;
            return 0;
        }

        if(d > 0)
            moves.insert(d);
    }

    cout << moves.size();

    return 0;
}