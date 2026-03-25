#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int b, k;
    cin >> b >> k;

    vector<int> a(k);
    for(int i = 0; i < k; i++)
        cin >> a[i];

    bool ans = 0;
    for(int i = 0; i < k; i++){
        if(ans == a[i] % 2)
            ans = 0;
        else
            ans = 1;

        if(i != k - 1){
            if(ans == 0)
                continue;
            else if(ans != b % 2)
                ans = 0;
        }
    }

    if(ans)
        cout << "odd";
    else
        cout << "even";

    return 0;
}