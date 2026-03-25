#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool taxiNumber(string s){
    int cnt = 0, check = s[0] - '0';
    for(int i = 0; i < s.size(); i++){
        int x = s[i] - '0';
        if(check == x){
            cnt++;
        }
    }

    if(cnt == 6){
        return true;
    }

    return false;
}


bool pizzaNumber(string s){
    int cnt = 0, check = s[0] - '0';
    for(int i = 1; i < s.size(); i++){
        if(s[i] == '-'){
            continue;
        } else{
            int x = s[i] - '0';
            if(x < check){
                cnt++;
            }
            check = x;
        }
    }

    if(cnt == 5){
        return true;
    }

    return false;
}


int main(){
    int n;
    cin >> n;

    vector<int> s(n), cntTaxi(n, 0), cntPizza(n, 0), cntCafe(n, 0);
    vector<string> name(n);

    for(int k = 0; k < n; k++){
        cin >> s[k] >> name[k];
        string a[s[k]];
        for(int i = 0; i < s[k]; i++){
            cin >> a[i];
        }

        for(int i = 0; i < s[k]; i++){
            if(taxiNumber(a[i])){
                cntTaxi[k]++;
            } else if(pizzaNumber(a[i])){
                cntPizza[k]++;
            } else{
                cntCafe[k]++;
            }
        }
    } 

    int maxTaxi = cntTaxi[0], maxPizza = cntPizza[0], maxCafe = cntCafe[0];
    for(int i = 1; i < n; i++){
        maxTaxi = max(maxTaxi, cntTaxi[i]);
        maxPizza = max(maxPizza, cntPizza[i]);
        maxCafe = max(maxCafe, cntCafe[i]);
    }

    int checkCnt = 0;
    cout << "If you want to call a taxi, you should call: ";
    for(int i = 0; i < n; i++){
        if(maxTaxi == cntTaxi[i] && checkCnt == 0){
            cout << name[i];
            checkCnt++;
        } else if(maxTaxi == cntTaxi[i]){
            cout << ", " << name[i];
        }
    }
    cout << '.' << endl;

    checkCnt = 0;
    cout << "If you want to order a pizza, you should call: ";
    for(int i = 0; i < n; i++){
        if(maxPizza == cntPizza[i] && checkCnt == 0){
            cout << name[i];
            checkCnt++;
        } else if(maxPizza == cntPizza[i]){
            cout << ", " << name[i];
        }
    }
    cout << '.' << endl;

    checkCnt = 0;
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    for(int i = 0; i < n; i++){
        if(maxCafe == cntCafe[i] && checkCnt == 0){
            cout << name[i];
            checkCnt++;
        } else if(maxCafe == cntCafe[i]){
            cout << ", " << name[i];
        }
    }
    cout << '.';

    return 0;
}