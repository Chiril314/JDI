#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

int main(){
/*
    char sir1[] = "STEP";
    char sir11[] = {'S', 'T', 'E', 'P'};

    cout << "sir1 = " << sir1;
    cout << "sir11 = " << sir11;
*/

/*
    char nume[100];
    cout << "Enter name: ";
//    cin >> nume;
    cin.getline(nume, 100);

    cout << endl;
//    for(int i = 0; nume[i] != '\0'; i++)
//    cout << nume[i];

    int i = 0;
    while(nume[i] != '\0'){
        cout << nume[i] << " - " << (int)nume[i] << endl;
        i++;
    }
*/

/*
    char nume[100];
    int ani;
    double media;
    char adresa[256];

    cout << "Enter nume = ";
    cin.getline(nume, 100);

    cout << endl << "Enter ani = ";
    cin >> ani;
    cin.ignore();

    cout << endl << "Enter media = ";
    cin >> media;
    cin.ignore();

    cout << endl << "Enter adresa = ";
    cin.getline(adresa, 256);

    cout << endl << "Nume: " << nume;
    cout << endl << "Ani: " << ani;
    cout << endl << "Media: " << media;
    cout << endl << "Adresa: " << adresa;
*/

/*
    char sir[] = "STEP";
    cout << "SIR = " << sir << ", strlen(sir) = " << strlen(sir) << endl;
*/

/*
    char sir1[] = "STEP", sir2[256];
    cout << "SIR1 = " << sir1 << ", strlen(sir1) = " << strlen(sir1) << endl;
    cout << "SIR2 = " << sir2 << ", strlen(sir2) = " << strlen(sir2) << endl;

    strcpy(sir2, sir1);

    cout << "SIR1 = " << sir1 << ", strlen(sir1) = " << strlen(sir1) << endl;
    cout << "SIR2 = " << sir2 << ", strlen(sir2) = " << strlen(sir2) << endl;
*/

/*
    char sir1[256] = "STEP", sir2[] = "2025";
    cout << "SIR1 = " << sir1 << ", strlen(sir1) = " << strlen(sir1) << endl;
    cout << "SIR2 = " << sir2 << ", strlen(sir2) = " << strlen(sir2) << endl;
 
    strcat(sir1, " ");
    strcat(sir1, sir2);

    cout << endl << "SIR1 = " << sir1 << ", strlen(sir1) = " << strlen(sir1) << endl;
    cout << "SIR2 = " << sir2 << ", strlen(sir2) = " << strlen(sir2) << endl;    
*/

/*
    char sir1[] = "STEP", sir2[] = "STEP";
    cout << "SIR1 = " << sir1 << ", strlen(sir1) = " << strlen(sir1) << endl;
    cout << "SIR2 = " << sir2 << ", strlen(sir2) = " << strlen(sir2) << endl;

    if(strcmp(sir1, sir2) == 0)
        cout << "\"" << sir1 << "\" == \"" << sir2 << "\"" << endl;
    else
        cout << "\"" << sir1 << "\" != \"" << sir2 << "\"" << endl;
*/

/*
    char sir[] = "STEP 202$", chr = '$';
    cout << "SIR = " << sir << ", strlen(sir) = " << strlen(sir) << endl;  
    cout << "CHR = " << chr << endl;

    if(strchr(sir, chr))
        cout << "\"" << sir << "\" <= \"" << chr << "\"" << endl;
    else
        cout << "\"" << sir << "\"  NOT <= \"" << chr << "\"" << endl;
*/

    char sir1[] = "STEP 2025", sir2 = '2025';
    cout << "SIR1 = " << sir1 << ", strlen(sir1) = " << strlen(sir1) << endl;  
    cout << "SIR2 = " << sir2 << ", strlen(sir2) = " << strlen(sir2) << endl;

    if(strchr(sir1, sir2))
        cout << "\"" << sir1 << "\" <= \"" << sir2 << "\"" << endl;
    else
        cout << "\"" << sir1 << "\"  NOT <= \"" << sir2  << "\"" << endl;
    
    return 0;
}