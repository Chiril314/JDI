#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    cout << 3 << endl;
    cout << "L 2" << endl << "R 2" << endl;
    cout << "R " << (s.size() * 2) - 1;

    return 0;
}