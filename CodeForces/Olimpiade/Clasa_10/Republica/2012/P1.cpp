#include <iostream>
#include <string>

using namespace std;

int main(){
    unsigned long long Q, N;
    string S;

    cin >> Q;
    cin.ignore(); 
    getline(cin, S);

    N = Q;
    for(long long i = 0; i < S.size(); i++){
        unsigned long long o = (unsigned long long)S[i] * S[i] * S[i];
        N += (i + 1) * o;
    }

    cout << N;

    return 0;
}