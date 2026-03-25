#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    while(true){
        int mx = 0, index = -1;
        for(int i = 1; i < n; i++){
            if(a[i] > mx){
                mx = a[i];
                index = i;
            }
        }

        if(a[0] > mx)
            break;

        a[0]++;
        a[index]--;
        ans++;
    }

    cout << ans;

    return 0;
}