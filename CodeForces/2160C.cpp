#include <iostream>
#include <string>

using namespace std;

string toBinary(long long n){
    if(n == 0)
        return "0";
    
    string ans = "";
    while(n > 0){
        ans += to_string(n % 2);
        n /= 2;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, cnt = 0;
        cin >> n;

        string a = toBinary(n);
        for(int i = 0; i < a.size(); i++)
            if(a[i] == '1')
                cnt++;

        if(cnt % 2 != 0){
            cout << "NO" << endl;
            continue;
        }

        cnt = 0;
        for(int i = a.size() - 1; i >= 0; i--)
            if(a[i] == '0')
                cnt++;
            else
                break;

        reverse(a.begin(), a.end());
        a += string(cnt, '0');

        int left = 0, right = a.size() - 1;
        bool flag = true;
        while(left < right){
            if(a[left] != a[right]){
                flag = false;
                break;
            }

            left++;
            right--;
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}