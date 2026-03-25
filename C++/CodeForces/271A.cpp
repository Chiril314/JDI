#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    n++;
    
    while (true) {
        string s = to_string(n);
        bool check = true; 
        
        for (int i = 0; i < s.size(); i++) {
            for (int j = i + 1; j < s.size(); j++) {
                if (s[i] == s[j]) {
                    check = false;
                    break;
                }
            }
            if (!check) break;
        }
        
        if (check) {
            cout << n;
            break;
        }

        n++;
    }

    return 0;
}