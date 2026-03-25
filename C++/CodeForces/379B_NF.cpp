#include <iostream>
#include <vector>

using namespace std;

bool walletCheck(vector<int> check){
    int cnt = 0;
    for(int i = 0; i < check.size(); i++){
        if(check[i] == 0){
            cnt++;
        }
    }

    if(cnt == check.size()){
        return true;
    } else{
        return false;
    }
}


int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> check(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        check[i] = a[i];
    }


    string ans = "";
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(i == 0){
                for(int j = 0; j < n; j++){
                    if(check[j] > 0){
                        ans += 'P';
                        check[j]--;
                    }

                    if(j + 1 < n){
                        ans += 'R';
                    }

                    if(check[j + 1] > 0){
                        ans += 'P';
                        check[j]--;
                    }
                }

                if(walletCheck(check)){
                    break;
                }
            } else{
                for(int j = 0; j < n; j++){
                    if(check[j] > 0 && j != 0){
                        ans += 'P';
                        check[j]--;
                    }

                    if(j + 1 < n){
                        ans += 'R';
                    }

                    if(check[j + 1] > 0 && j != 0){
                        ans += 'P';
                        check[j]--;
                    }
                }

                if(walletCheck(check)){
                    break;
                }
            }
        } else{
            for(int j = n - 1; j >= 0; j--){
                if(check[j] > 0 && j != n - 1){
                    ans += 'P';
                    check[j]--;
                }

                if(j - 1 >= 0){
                    ans += 'L';
                }

                if(check[j - 1] > 0 && j != n - 1){
                    ans += 'P';
                    check[j]--;
                }
            }

            if(walletCheck(check)){
                break;
            }
        }
    }

    cout << ans;

    return 0;
}