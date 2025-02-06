#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n0, n1, n2;
        cin >> n0 >> n1 >> n2;

        string ans = "";
        if(n0 > 0){
            ans += '0';
            for(int i = 0; i < n0; i++){
                ans += '0';
            }

            if(n1 > 0){
                if(n1 % 2 == 0 && n2 > 0){
                    for(int i = 1; i < n1; i++){
                        if(i % 2 == 1){
                            ans += '1';
                        } else{
                            ans += '0';
                        }
                    }

                    for(int i = 0; i < n2; i++){
                        ans += '1';
                    }

                    ans += '0';
                } else{
                    for(int i = 1; i <= n1; i++){
                        if(i % 2 == 1){
                            ans += '1';
                        } else{
                            ans += '0';
                        }
                    }

                    if(n2 > 0){
                        for(int i = 0; i < n2; i++){
                            ans += '1';
                        }
                    }
                }
            }
        } else if(n1 > 0){
            ans += '0';
            if(n1 % 2 == 0 && n2 > 0){
                for(int i = 1; i < n1; i++){
                    if(i % 2 == 1){
                        ans += '1';
                    } else{
                        ans += '0';
                    }
                }

                for(int i = 0; i < n2; i++){
                    ans += '1';
                }

                ans += '0';
            } else{
                for(int i = 1; i <= n1; i++){
                    if(i % 2 == 1){
                        ans += '1';
                    } else{
                        ans += '0';
                    }
                }

                if(n2 > 0){
                    for(int i = 0; i < n2; i++){
                        ans += '1';
                    }
                }
            }
        } else if(n2 > 0){
            ans += '1';
            for(int i = 0; i < n2; i++){
                ans += '1';
            }
        }

        cout << ans << endl;
    }

    return 0;
}