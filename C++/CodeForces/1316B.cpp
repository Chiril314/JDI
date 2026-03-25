#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        string Fs = s;
        int Fk = 1;

        for(int k = 2; k <= n; k++){
            string prefix = s.substr(k - 1);
            string suffix = s.substr(0, k - 1); 

            if((n - k + 1) % 2 == 1)
                reverse(suffix.begin(), suffix.end());

            string check = prefix + suffix;

            if(check < Fs){
                Fs = check;
                Fk = k;
            }
        }

        cout << Fs << endl;
        cout << Fk << endl;
    }

    return 0;
}