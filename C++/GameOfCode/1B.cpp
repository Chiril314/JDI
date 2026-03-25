#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    vector<string> c = {"TBOW", "BTOW", "OBTW", "WBOT", "TOBW", "TWOB", "TBWO"};
    while(t--){
        string s;
        cin >> s;

        bool flag = false;
        for(int i = 0; i < c.size(); i++)
            if(s == c[i]){
                flag = true;
                break;
            }

        if(flag)
            cout << "DA" << endl;
        else
            cout << "NU" << endl;
    }   

    return 0;
}