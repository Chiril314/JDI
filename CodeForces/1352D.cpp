#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> candies(n);
        for(int i = 0; i < n; i++){
            cin >> candies[i];
        }

        int left = 0, right = n - 1;
        int ans = 0, a = 0, b = 0;
        int checkA = 0, checkB = 0;

        while(left <= right){
            ans++;

            if(ans % 2 == 1){
                checkA = 0;
                while(left <= right && checkA <= checkB){
                    checkA += candies[left];
                    a += candies[left];
                    left++;
                }
            } else{
                checkB = 0;
                while(left <= right && checkB <= checkA){
                    checkB += candies[right];
                    b += candies[right];
                    right--;
                }
            }
        }

        cout << ans << ' ' << a << ' ' << b << endl;
    }

    return 0;
}