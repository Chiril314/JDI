#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
		string s;
        cin >> n >> k >> s;

        int ans = 0;
        for(int i = 0; i < n; i++)
            if(s[i] == '1')
                for(int j = i - k; j <= i + k; j++)
                    if(j >= 0 && j < n)
                        s[j] = '2';

        int distance = 0;
        for(int i = 0; i < n; i++)
            if(s[i] == '0')
                distance++;
            else{
                ans += distance / (k + 1);
                if(distance % (k + 1) != 0)
                    ans++;

                distance = 0;
            }

        ans += distance / (k+1);
        if(distance % (k + 1) != 0)
            ans++;
 
        cout << ans << endl;
    }

    return 0;
}