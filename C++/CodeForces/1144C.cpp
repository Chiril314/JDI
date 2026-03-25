#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<int> a;
    vector<int> b;
    int cnt[200001] = {0};
    for(long long i = 0; i < n; i++){
        int x;
        cin >> x;
        cnt[x]++;

        if(cnt[x] == 1)
            a.push_back(x);
        else if(cnt[x] == 2)    
            b.push_back(x);
        else if(cnt[x] > 2){
            cout << "NO";
            return 0;
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    cout << "YES" <<  endl << a.size() << endl;
    for(long long i = 0; i < a.size(); i++)
        cout << a[i] << ' ';

    cout << endl << b.size() << endl;
    for(long long i = 0; i < b.size(); i++)
        cout << b[i] << ' ';

    return 0;
}