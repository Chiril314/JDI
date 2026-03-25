#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n == 1)
            cout << "1\n";
        else if(n == 2)
            cout << "-1\n";
        else if(n == 3)
            cout << "2 9 7 \n4 6 3 \n1 8 5\n";
        else{
            vector<int> a(n);

            int j = 0;
            for(int i = 1; i < n; i += 2){
                a[j] = n - i;
                j++;
            }

            for(int i = 0; i < n; i += 2){
                a[j] = n - i;
                j++;
            }
            
            for(int k = 0; k < n; k++){
                for(int i = 0; i < n; i++){
                    cout << a[i] << ' ';
                    a[i] += n;
                }

                cout << "\n";
            }
        }
    }

    return 0;
}