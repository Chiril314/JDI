#include <iostream>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    int h1, h2, m1, m2;

    h1 = stoi(s1.substr(0, 2));
    m1 = stoi(s1.substr(3, 2));
    h2 = stoi(s2.substr(0, 2));
    m2 = stoi(s2.substr(3, 2));

    int check = (((h1 * 60) + m1) + ((h2 * 60) + m2)) / 2;
    int hFinal = check / 60;
    int mFinal = check - (60 * hFinal);

    if(mFinal < 10 && hFinal < 10){
        cout << '0' << hFinal << ":0" << mFinal;
    } else if(mFinal < 10){
        cout << hFinal << ":0" << mFinal;
    } else if(hFinal < 10){
        cout << '0' << hFinal << ':' << mFinal;
    } else{
        cout << hFinal << ':' << mFinal;
    }

    return 0;
}