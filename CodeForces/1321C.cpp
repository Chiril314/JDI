#include <iostream>

using namespace std;

int main(){
	int n;
	string s;

	cin >> n >> s;

    char max = 'a';
    int poz;
    for(int i = 0; i < s.size(); i++)
        if(max < s[i]){
            max = s[i];
            poz = i;
        }
    
    int ans  = 0;
    for(char i = max; i >= 'a'; i--)
        for(int j = 0; j < s.size(); j++)
            if(s[j] == i){
                if(s[j - 1] == i - 1 || s[j + 1] == i - 1){
                    s.erase(s.begin() + j);
                    ans++;
                    j = 0;
                }
            }

    for(char i = max; i >= 'a'; i--)
        for(int j = 0; j < s.size(); j++)
            if(s[j] == i){
                if(s[j - 1] == i - 1 || s[j + 1] == i - 1){
                    s.erase(s.begin() + j);
                    ans++;
                    j = 0;
                }
            }

    cout << ans;

    return 0;
}