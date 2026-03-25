#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--){
        int n;
        string s;

        cin >> n >> s;

        vector<int> p(n + 1, 0);
        vector<int> k(n + 1, 0);    
        
        for(int i = 0; i < n; i++){
            p[i + 1] = p[i] + (s[i] - '0');
            k[i] = p[i + 1] - (i + 1);
        }

        int min_k = 0, max_k = 0;
        for(int i = 0; i < n; i++){
            if(k[i] < min_k) 
                min_k = k[i];
            if(k[i] > max_k) 
                max_k = k[i];
        }

        int r = max_k - min_k + 1;
        vector<int> freq(r, 0);  
        long long ans = 0;

        freq[-min_k] = 1;
        for(int i = 0; i < n; i++){
            int shifted_k = k[i] - min_k;
            ans += freq[shifted_k];
            freq[shifted_k]++;
        }

        cout << ans << endl;
    }

    return 0;
}