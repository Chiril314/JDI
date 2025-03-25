#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> cnt(n + 1, 0);  

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] <= n)
            cnt[a[i]]++;
    }

    int ans = 0, check = 1;
    for(int i = 0; i < n; i++){ 
        while((a[i] > n || cnt[a[i]] > 1) && check <= n){
            while(check <= n && cnt[check] > 0)
                check++;

            if(a[i] > n || cnt[a[i]] > 1){
                if(a[i] <= n) 
                    cnt[a[i]]--;  
                
                a[i] = check;  
                cnt[check]++; 
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}