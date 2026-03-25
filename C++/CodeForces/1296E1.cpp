#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    string s, s1 = "0", s2 = "0";
    cin >> s;

    vector<int> c(n);
    for(int i = 0; i < n; i++)
        cin >> c[i];

    for(int i = 0; i < n; i++)
        if(s[i] >= s1.back()){
            s1 += s[i];
            c[i] = 1;
        } else if(s[i] >= s2.back())
            s2 += s[i];
        else{
            cout << "NO";
            return 0;
        }

    cout << "YES" << endl;
    for(int i = 0; i < n; i++)
        cout << c[i];

    return 0;
}