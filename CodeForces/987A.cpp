#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<bool> infinityStones(6, false);
    string stonesColor[6] = {"purple", "blue", "red", "orange", "green", "yellow"};
    string stones[6] = {"Power", "Space", "Reality", "Soul", "Time", "Mind"};
    for(int i = 0; i < n; i++){
        string stone;
        cin >> stone;

        for(int j = 0; j < 6; j++)
            if(stone == stonesColor[j]){
                infinityStones[j] = true;
                break;
            }
    }

    cout << 6 - n;
    for(int i = 0; i < 6; i++)
        if(!infinityStones[i])
            cout << endl << stones[i];

    return 0;
}