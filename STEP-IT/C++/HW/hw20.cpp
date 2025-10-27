#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
        
using namespace std;
	
void save_VECTOR_X(char NF[], int *X){
    FILE *fp;
    
    fp = fopen(NF, "w+");
    fprintf(fp, "%d\n", *X);
    for(int i = 0, N; i < *X; i++){
        N = rand()%20+10;
        fprintf(fp, "%d ", N);
                
        for(int j = 0; j < N; j++)
            fprintf(fp, "%d ", rand()%10);
        fprintf(fp, "\n");
    }
    
    fclose(fp);
}
	
int load_VECTOR_X(char *NF, int MATRIX[][100]){
    int X;
    FILE *fp;
    
    if((fp = fopen(NF, "r+")) == NULL){ 
        cout << "ERROR R+" << endl; 
        exit(0); 
    }
    
    fscanf(fp, "%d", &X);
    for(int i = 0; i < X; i++){
        fscanf(fp, "%d", &MATRIX[i][0]);
        for(int j = 1; j <= MATRIX[i][0]; j++)
            fscanf(fp, "%d", &MATRIX[i][j]);		    	
    }
    
    fclose(fp);
    return X;
}
	
int main(){
    srand(time(0));

    int MATRIX[1000][100],  X ;     

    cout << "Enter nr. vectori = "; 
    cin >> X; 

    save_VECTOR_X("VECTOR_X.step", &X);

    int XX = load_VECTOR_X("VECTOR_X.step", MATRIX);
    for(int i = 0; i < XX; i++){  
        cout << "\n V" << i + 1 << "[" << MATRIX[i][0] << "] :: "; 
        for(int j = 1; j <= MATRIX[i][0]; j++)
            cout << ' ' << MATRIX[i][j];
    }   
	 
    return  0;   
}