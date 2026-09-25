#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item{
    int value;
    int idx;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<Item> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].value;
        a[i].idx = i + 1;
    }

    sort(a.begin(), a.end(), [](const Item& x, const Item&y){
        return x.value < y.value;
    });

    for(int i = 0; i < n; i++){
        int left = i + 1, right = n - 1;
        while(left < right){
            long long sum = a[i].value + a[left].value + a[right].value;
            if(sum == x){
                cout << a[i].idx << ' ' << a[left].idx << ' ' << a[right].idx;
                return 0;
            }

            if(sum < x)
                left++;
            else
                right--;
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}