#include <iostream>
 
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        string s;
        cin >> s;
 
        int map[2 * s.size() + 1][2 * s.size() + 1];
 
        for(int i = 0; i <= 2 * s.size(); i++){
            for(int j = 0; j <= 2 * s.size(); j++){
                map[i][j] = 0;
            }
        }
 
        map[s.size()][s.size()] = 1;
        int posX = s.size(), posY = s.size(), ans = -5;
 
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'S'){
                posY--;
            } else if(s[i] == 'N'){
                posY++;
            } else if(s[i] == 'W'){
                posX--;
            } else if(s[i] == 'E'){
                posX++;
            }
 
            map[posX][posY]++;
        }

        for(int i = 0; i <= 2 * s.size(); i++){
            for(int j = 0; j <= 2 * s.size(); j++){
                if(map[i][j] >= 1){
                    ans += map[i][j] + 4;
                }
            }
        }

        cout << ans << endl;
    }
 
    return 0;
}