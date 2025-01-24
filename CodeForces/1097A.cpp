#include <iostream>

using namespace std;

int main(){
    string c, c1, c2, c3, c4, c5;
    cin >> c >> c1 >> c2 >> c3 >> c4 >> c5;
    
    string check1 = "234567890TJQKA";
    string check2 = "DCSH";

    int C, C1, C2, C3, C4, C5, K, K1, K2, K3, K4, K5;
    for(int i = 0; i < 14; i++){
        if(c[0] == check1[i]){
            C = i;
        }

        if(c1[0] == check1[i]){
            C1 = i;
        }

        if(c2[0] == check1[i]){
            C2 = i;
        }

        if(c3[0] == check1[i]){
            C3 = i;
        }

        if(c4[0] == check1[i]){
            C4 = i;
        }

        if(c5[0] == check1[i]){
            C5 = i;
        }
    }

    for(int i = 0; i < 4; i++){
        if(c[1] == check2[i]){
            K = i;
        }

        if(c1[1] == check2[i]){
            K1 = i;
        }

        if(c2[1] == check2[i]){
            K2 = i;
        }

        if(c3[1] == check2[i]){
            K3 = i;
        }

        if(c4[1] == check2[i]){
            K4 = i;
        }
        
        if(c5[1] == check2[i]){
            K5 = i;
        }
    }

    if(c[0] == c1[0] || c[0] == c2[0] || c[0] == c3[0] || c[0] == c4[0] || c[0] == c5[0]){
        cout << "YES";
        return 0;
    }

    if((c[1] == c1[1] && C1 >= C) || (c[1] == c1[1] && K1 >= K)){
        cout << "YES";
        return 0;
    }

    if((c[1] == c2[1] && C2 >= C) || (c[1] == c2[1] && K2 >= K)){
        cout << "YES";
        return 0;
    }
    
    if((c[1] == c3[1] && C3 >= C) || (c[1] == c3[1] && K3 >= K)){
        cout << "YES";
        return 0;
    }

    if((c[1] == c4[1] && C4 >= C) || (c[1] == c4[1] && K4 >= K)){
        cout << "YES";
        return 0;
    }

    if((c[1] == c5[1] && C5 >= C) || (c[1] == c5[1] && K5 >= K)){
        cout << "YES";
        return 0;
    }

    cout << "NO";

    return 0;
}