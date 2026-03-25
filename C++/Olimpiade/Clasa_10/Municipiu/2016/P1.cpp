#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> nume(n);
    vector<string> prenume(n);

    vector<pair<string, string>> numeIntreg(n);
    vector<bool> check(n, false);
    for(int i = 0; i < n; i++)
        cin >> nume[i] >> prenume[i];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if((prenume[i] == prenume[j] || prenume[i] == nume[j] || nume[i] == prenume[i]) && i != j)
                check[i] = true;

    for(int i = 0; i < n; i++){
        if(check[i] == 0){
            numeIntreg[i].first = prenume[i];
            numeIntreg[i].second = nume[i];
        } else{
            numeIntreg[i].first = nume[i];
            numeIntreg[i].second = prenume[i];
        }
    }

    sort(numeIntreg.begin(), numeIntreg.end());
    for(int i = 0; i < n; i++)
        cout << numeIntreg[i].first << ' ' << numeIntreg[i].second << endl;
        
    return 0;
}