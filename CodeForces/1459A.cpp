#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int cnta = 0, cntb = 0;
        for(int i = 0; i < n; i++)
            if(a[i] > b[i])
                cnta++;
            else if(a[i] < b[i])
                cntb++;

        if(cnta > cntb)
            cout << "RED" << endl;
        else if(cntb > cnta)
            cout << "BLUE" << endl;
        else
            cout << "EQUAL" << endl;
    }

    return 0;
}