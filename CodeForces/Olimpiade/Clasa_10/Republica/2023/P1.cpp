#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> p(n);
    for(int i = 0; i < n; i++)
        cin >> p[i];

    vector<int> t(n);
    vector<bool> check(n, false);
    for(int i = 0; i < n; i++){
        cin >> t[i];
        if(t[i] == p[i])
            check[i] = true;
    }

    int ans = 0;
    for(int i = 0 ; i < n; i++){
        if(t[i] < p[i]){
            int temp = i + 1;
            while(temp <= n && !check[temp] && t[temp] < p[temp])
                temp++;

            int diff = p[i] - t[i];
            ans += diff;
            
            for(int j = i; j < temp; j++){
                t[j] += diff;
                if(t[j] == p[j])
                    check[j] = true;
            }
        } else if(t[i] > p[i]){
            int temp = i + 1;
            while(temp <= n && !check[temp] && t[temp] > p[temp])
                temp++;

            int diff = t[i] - p[i];
            ans += diff;

            for(int j = i; j < temp; j++){
                t[j] -= diff;
                if(t[j] == p[j])
                    check[j] = true;
            }   
        }
    }

    cout << ans;

    return 0;
}