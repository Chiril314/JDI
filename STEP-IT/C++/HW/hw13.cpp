#include <iostream>

using namespace std;

int main(){

// 1) strlen
/*
    char sir[] = "STEP 2025";
    int LEN = 0;
    while(sir[LEN] != 0)
        LEN++;

    cout << "SIR = " << sir << ", LEN = " << LEN;
*/


// 2) strcpy
/*
    char sir1[256], sir2[] = "STEP 2025";

    int i = 0;
    while(sir2[i] != 0){
        sir1[i] = sir2[i];
        i++;
    }

    sir1[i] = '\0';
    cout << "sir1 = " << sir1;
    cout << endl << "sir2 = " << sir2;
*/


// 3) strcat
/*
    char sir1[256] = "STEP", sir2[256] = " 2025";

    cout << "sir1 = " << sir1;
    cout << endl << "sir2 = " << sir2;

    int n = 0;
    while(sir1[n] != 0)
        n++;

    int i = 0;
    while(sir2[i] != 0 && n + i < 256){
        sir1[n + i] = sir2[i];
        i++;
    }

    sir1[i + n] = 0;
    cout << endl << "sir = " << sir1;
*/


// 4) strcmp
/*
    char sir1[] = "STEP", sir2[] = "2025";

    cout << "sir1 = " << sir1;
    cout << endl << "sir2 = " << sir2;

    int i = 0;
    while(true){
        if(sir1[i] == 0 && sir2[i] != 0){
            cout << endl << sir1 << " != " << sir2;
            break;
        } else if(sir1[i] != 0 && sir2[i] == 0){
            cout << endl << sir1 << " != " << sir2;
            break;
        } else if(sir1[i] == 0 && sir2[i] == 0){
            cout << endl << sir1 << " == " << sir2;
            break;            
        }

        if(sir1[i] != sir2[i]){
            cout << endl << sir1 << " != " << sir2;
            break;
        }

        i++;
    }
*/


// 5) strchr
/*
    char sir[] = "STEP2025";

    int i = 0;
    bool flag = false;
    while(sir[i] != 0){
        if(sir[i] == '$'){
            cout << sir << ", simbolul $ a fost gasit pe pozitia " << i + 1;
            flag = 1;
            break;
        }

        i++;
    }

    if(!flag)
        cout << sir << ", simbolul $ nu a fost gasit";
*/


// 6) strstr
    char sir1[] = "STEP 2025", sir2[] = "2025";

    cout << "sir1 = " << sir1;
    cout << endl << "sir2 = " << sir2;

    int i1 = 0;
    while(sir1[i1] != 0)
        i1++;

    int i2 = 0;
    while(sir2[i2] != 0)
        i2++;

    if(i1 < i2)
        cout << endl << sir2 << " este mai mare decat sirul " << sir1;
    else{
        int n = 0, i = 0;
        bool flag = false;
        while(sir1[n] != 0){
            if(sir1[n] == sir2[i]){
                i++;
                if(i == i2){
                    cout << endl << sir2 << " a fost gasit in sirul " << sir1 << " pe pozitia " << n - i + 2;
                    flag = true; 
                    break;
                }
            } else{
                if(i > 0)
                    n--;
                i = 0;
            }

            n++;
        }

        if(!flag)
            cout << endl << sir2 << " nu a fost gasit in sirul " << sir1;
    }

    return 0;
}