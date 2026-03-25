#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();

    vector<int> a;
    for(int i = 0; i < n; i++)
        if(s[i] == '(')
            for(int j = n - 1; j > i; j--)
                if(s[j] == ')'){
                    a.push_back(i);
                    s[i] = '%';
                    a.push_back(j);
                    s[j] = '%';
                    break;
                }

    if(!a.size()){
        cout << 0;
        return 0;
    }

    sort(a.begin(), a.end());

    cout << 1 << endl << a.size() << endl;
    for(int i = 0; i < a.size(); i++)
        cout << a[i] + 1 << ' ';

    return 0;
}