#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int m[n], c[n], cntM = 0, cntC = 0;
    for(int i = 0; i < n; i++){
        cin >> m[i] >> c[i];
        if(m[i] > c[i]){
            cntM++;
        } else if(m[i] < c[i]){
            cntC++;
        }
    }

    if(cntM > cntC){
        cout << "Mishka";
    } else if(cntM < cntC){
        cout << "Chris";
    } else if(cntM == cntC){
        cout << "Friendship is magic!^^";
    }

    return 0;
}