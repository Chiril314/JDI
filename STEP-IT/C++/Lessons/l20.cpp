#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

//      w+  -  creasa sau recreaza fisierul
//      r+  -  deschide fisierul
//      a+  -  deschide sau creeaza fisierul pentru adaugare la sfarsit


// formatarea informatiei
// int -> %d
// float -> %f
// double -> %lf
// char -> %c
// char s[] -> %s

int main(){
    srand(time(0));

/*
    char s[100];
    cout << "Enter file name: ";
    cin >> s;

    FILE *fp;
    fp = fopen(strcat(s, ".txt"), "w+");
    fclose(fp);
*/


/*
    FILE *fp;
    if((fp = fopen("STEP.txt", "w+")) == NULL){
        cout << "ERROR W+ FILE";
        exit(0);
    }

//    fprintf(stdout, "STEP 2025");
//    fprintf(fp, "STEP 2025");

    fprintf(fp, "%s %d", "STEP", 2025);
    fclose(fp);
*/


/*
    char s[100], d[100];
    cout << "Enter a file name: ";
    cin >> s;

    strcpy(d, s);

    FILE *fp;
    if((fp = fopen(strcat(s, ".txt"), "w+")) == NULL){
        cout << "ERROR W+ FILE";
        exit(0);
    }

    for(int i = 0; i < strlen(d); i++)
        fprintf(fp, "%c\n", d[i]);
    fclose(fp);
*/


/*
    FILE *fp;
    if((fp = fopen("STEP.txt", "w+")) == NULL){
        cout << "ERROR W+ FILE";
        exit(0);
    }

    fprintf(fp, "STEP 2025");
    fclose(fp);

    if((fp = fopen("STEP.txt", "r+")) == NULL){
        cout << "ERROR R+ FILE";
        exit(0);
    }

    char sir[256];
    int an;

    fscanf(fp, "%s%d", &sir, &an);
    fclose(fp);

    fprintf(stdout, "sir = %s\nan = %d", sir, an);
*/


/*
    FILE *fp;
    char sir[256];
    int cnt = 0;

    fp = fopen("STEP.txt", "r+");
    while(!feof(fp)){
        fscanf(fp, "%c", &sir[cnt]);
        cnt++;
    }

    sir[--cnt] = 0;

    cout << "sir = " << sir << endl << cnt;
*/


/*
    FILE *fp;
    if((fp = fopen("STEP.txt", "w+")) == NULL){
        cout << "ERROR W+ FILE";
        exit(0);
    }

    fprintf(fp, "%d %d %d", rand()%10, rand()%10, rand()%10);
    fclose(fp);

    if((fp = fopen("STEP.txt", "r+")) == NULL){
        cout << "ERROR R+ FILE";
        exit(0);
    }
    
    int a, b, c, r;
    fscanf(fp, "%d%d%d", &a, &b, &c);
    r = a + b - c;
    fclose(fp);

    if((fp = fopen("STEP.txt", "a+")) == NULL){
        cout << "ERROR A+ FILE";
        exit(0);
    }

    fprintf(fp, "\n%d + %d - %d = %d", a, b, c, r);
    fclose(fp);
*/


/*
    FILE *fp;
    
    int n = rand()%10 + 10;
    if((fp = fopen("STEP.txt", "w+")) == NULL){
        cout << "ERROR W+ FILE";
        exit(0);
    }

    fprintf(fp, "v[%d]:", n);
    for(int i = 0; i < n; i++)
        fprintf(fp, " %d", rand()%10);
    fprintf(fp, "\n");
    fclose(fp);

    int v[100], N;
    if((fp = fopen("STEP.txt", "r+")) == NULL){
        cout << "ERROR R+ FILE";
        exit(0);
    }    

    fscanf(fp, "v[%d]:", &N);

    for(int i = 0; i < N; i++)
        fscanf(fp, "%d", &v[i]);
    fclose(fp);
    cout << "v[" << N << "]:";
    for(int i = 0; i < N; i++)
        cout << ' ' << v[i];
*/

    FILE *fp;

    int n = rand()%5 + 5, m = rand()%5 + 5;
    if((fp = fopen("STEP.txt", "w+")) == NULL){
        cout << "ERROR W+ FILE";
        exit(0);
    }

    fprintf(fp, "m[%d][%d]:\n", n, m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            fprintf(fp, "%d ", rand()%10);
        fprintf(fp, "\n");
    }
    fclose(fp);

    int a[20][20], N, M;
    if((fp = fopen("STEP.txt", "r+")) == NULL){
        cout << "ERROR R+ FILE";
        exit(0);
    }

    fscanf(fp, "m[%d][%d]:", &N, &M);
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            fscanf(fp, "%d", &a[i][j]);

    cout << "m[" << N << "][" << M << "]: " << endl;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    return 0;
}