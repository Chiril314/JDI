#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string a, b;
        cin >> a >> b;

        vector<pair<char, int>> v;
        for(int i = 0; i < a.size(); i++)
            v.push_back({a[i], i});
        
        sort(v.begin(), v.end());

        bool flag = false;
        for(int i = 0; i < a.size(); i++){
            for(int j = 0; j < a.size(); j++){
                if(j < v[i].second && a[j] > v[i].first){
                    char c = v[i].first;
                    while(v[i].first == c && i < v.size())
                        i++;

                    if(v[i].first != c)
                        i--;

                    swap(a[j], a[v[i].second]);
                    flag = true;

                    break;
                }

                if(flag)
                    break;
            }

            if(flag)    
                break;
        }

        if(a < b)
            cout << a << endl;
        else
            cout << "---" << endl;
    }

    return 0;
}