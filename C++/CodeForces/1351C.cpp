#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        set<pair<pair<int, int>, pair<int, int>>> visited;
        int x = 0, y = 0, ans = 0;

        for(int i = 0; i < s.size(); i++){
            int nx = x, ny = y;
            if(s[i] == 'N') 
                ny++;
            else if(s[i] == 'S')
                ny--;
            else if(s[i] == 'E') 
                nx++;
            else if(s[i] == 'W') 
                nx--;

            pair<int, int> start = {x, y};
            pair<int, int> end = {nx, ny};

            if(visited.count({start, end}) || visited.count({end , start})){
                ans += 1; 
            } else{
                ans += 5; 
                visited.insert({start, end});
                visited.insert({end, start}); 
            }

            x = nx;
            y = ny;
        }

        cout << ans << endl;
    }

    return 0;
}