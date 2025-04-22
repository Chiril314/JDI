#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    string check = "47";
    if(stoi(check) >= n){
        cout << check;
        return 0;
    }

    while(next_permutation(check.begin(), check.end()))
        if(stoi(check) >= n){
            cout << check;
            return 0;
        }

    check = "4477";
    if(stoi(check) >= n){
        cout << check;
        return 0;
    }

    while(next_permutation(check.begin(), check.end()))
        if(stoi(check) >= n){
            cout << check;
            return 0;
        }

    check = "444777";
    if(stoi(check) >= n){
        cout << check;
        return 0;
    }

    while(next_permutation(check.begin(), check.end()))
        if(stoi(check) >= n){
            cout << check;
            return 0;
        }

    check = "44447777";
    if(stoi(check) >= n){
        cout << check;
        return 0;
    }

    while(next_permutation(check.begin(), check.end()))
        if(stoi(check) >= n){
            cout << check;
            return 0;
        }

    cout << "4444477777";

    return 0;
}