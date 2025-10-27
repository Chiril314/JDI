#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cstring>
 	  	 
using namespace std; 
   	 	 
//  FISIERE   

//  text   - informatia se salveaza in forma deschisa 
//  binare - inforamtia in format memorie

// flux - conexiua dintre soft(aplicatia) si HDD 

//  FILE *nume_var_pointer; 

//  &STRUCT_DATE <= fopen( NUME_FILE , REGIM ); 

// REGIM 

// 1.   w+    creaza fisierul( recreeaza ) 
// 2.   r+    deschide fisierul 
// 3.   a+    deschide(creeaza) fisierul pentru adaugare la sfarsit


//   fclose( nume_var_pointer );


//   fprintf( FLUX_out , "formatarea memoriei" , var_1, ....  ); 

//  1.  FLUX_out  - 

//   stdout - ecran
//   fp     - fisier 


// 2.  "formatarea memoriei" - include informatia si valorile
	
//	       int     =>  %d
//		   float   =>  %f
//		   double  =>  %lf
//		   char    =>  %c
//		   char[]  =>  %s
		   
	        
	        
	        
	        
//   fscanf( FLUX_in , "formatarea memoriei" , &var_1,  &var_2, ....  ); 

//  1.  FLUX_in

//  stdin 
//  fp  
	
	
	
//  feof(fp) => true   -> daca am ajuns la EOF  => End Of File 
	
void save_VECTOR_X( char NF[] , int *X )
{
    
    FILE *fp;
    
    fp=fopen( NF , "w+" );
    
    fprintf( fp , "%d\n", *X );
    
    for( int i = 0, N ; i < *X ; i++ )
    {
    
    N = rand()%20+10;
    
    fprintf( fp , "%d ", N );
            
    for( int j = 0 ; j < N ; j++ )
    {
        fprintf( fp , "%d ", rand()%10 );
    }
    
    fprintf( fp , "\n");
    
    }
	  
    fclose(fp);
    
}
	
int load_VECTOR_X( char *NF , int MATRIX[][100] )
{
    int X ; 
    
    FILE *fp;
    
    if( (fp = fopen( NF , "r+") ) == NULL ){ cout<<" ERROR R+ "<<endl; exit(0); }
    
    fscanf( fp , "%d" , &X );
    
    for( int i=0; i < X ; i++)		
    {
        fscanf( fp , "%d", &MATRIX[i][0]);
        
        for( int j = 1 ; j <= MATRIX[i][0] ; j++ )
        {
            fscanf( fp , "%d" , &MATRIX[i][j] );		    	
        }
        
    }
    
    fclose( fp );
    
    return X;
}
	
	
	
	
//   2. Fisiere BINARE 


// REGIM binar 

// 1.   w+b  <=>  wb+   
// 2.   r+b  <=>  rb+        
// 3.   a+b  <=>  ab+   
	
	
//	fwrite( &NUME_VARIABILA , sizeof( TIP_DATE_NUME_VARIABILA ) , NR_de_VAR , fp );
//	int NR_REAL_de_EXTRAGERI = fread( &NUME_VARIABILA , sizeof( TIP_DATE_NUME_VARIABILA ) , NR_MAX_de_VAR , fp );
	
struct ABC{
    int a;
    int b;
    int c;
    int R;
};
	
	
template <typename T>
void SAVE_BIN( char file_name[] , T STRUCT[] , int NR )
{
    FILE *fp;
    fp = fopen( file_name , "w+b");
    fwrite( STRUCT , sizeof(T) , NR , fp )	;
    fclose(fp);	 	
}
	
template <typename T>
int LOAD_BIN(char file_name[256], T STRUCT[], int MAX_SIZE ){
    FILE *fp;
    fp = fopen( file_name , "r+b");
    return fread(STRUCT, sizeof(T), MAX_SIZE, fp); 
}
	
int main(){  
    srand(time(0));
    
    int v[10] ; 
   
    for(int i = 0; i < 10; i++){ 
        v[i] = rand()%10;
        cout << ' ' << v[i];
    }

    cout << endl;
    SAVE_BIN( "V.step", v , 10 );   
    int N = LOAD_BIN( "V.step", v , 1000 );
       
    for(int i = 0; i < N; i++)  
        cout << ' ' << v[i];
        
    int meniu(){ 
        system("cls");
        cout<<"\n\n\t   MENIU        "<<endl;
        cout<<"\t  1. Insert Student "<<endl;
        cout<<"\t  2. Show Student   "<<endl;
        cout<<"\t  3. Edit Student   "<<endl;
        cout<<"\t  4. Find Student   "<<endl;
        cout<<"\t  5. SAVE Student   "<<endl;
        cout<<"\t  6. LOAD Student   "<<endl;
        cout<<"\tESC. EXIT           "<<endl;
        
        return _getch(); 	
    }
   
//    // a+b-c, n 
//  
//    ABC X[1000]; 
//    
//    int n = rand()%20+10 ; 
//    
//    for( int i =0 ; i < n ; i++)
//    {
//    	X[i].a = rand()%10;  	X[i].b = rand()%10;   	X[i].c = rand()%10;
//	
//	    X[i].R = X[i].a + X[i].b - X[i].c ;
//	    
//	    cout<<setw(5)<<i+1<<" din "<<n
//	        <<setw(5)<<X[i].a<<" + "<< X[i].b << " - " << X[i].c <<" = " << X[i].R <<endl; 
//	}
//    
//    
//    cout<<endl;
//    
    
//	FILE *fp;
//	fp = fopen("abc.step", "w+b");
//	fwrite( X , sizeof(ABC) , n , fp );
//	fclose(fp);
	 
//	ABC W[100];
//	fp = fopen("abc.step", "r+b");
//	int NR = fread( W , sizeof(ABC) , 100 , fp );
//	fclose(fp);
//	 
//	
//	for( int i =0 ; i < NR ; i++)
//    { 
//	    cout<<setw(5)<<i+1<<" din "<<n
//	        <<setw(5)<<X[i].a<<" + "<< X[i].b << " - " << X[i].c <<" = " << X[i].R <<endl; 
//	}
	
	
	
//	
//	SAVE_BIN( "FILE_BIN_ABC.step" , X , n );
//	
//	ABC Q[1000];
//	int NRQ = LOAD_BIN( "FILE_BIN_ABC.step" , Q , 1000 );
//	
//	for( int i =0 ; i < NRQ ; i++)
//    { 
//	    cout<<setw(5)<<i+1<<" din "<<NRQ
//	        <<setw(5)<<Q[i].a<<" + "<< Q[i].b << " - " << Q[i].c <<" = " << Q[i].R <<endl; 
//	}
//	
//	
	
	
	
	
//	
//	int A = 123321;
//	FILE *fpx;
//	fpx = fopen("VAR_A.step", "w+b");
//	fwrite( &A , sizeof(int) , 1 , fpx );
//	fclose(fpx);
//	
//	int B;
//	fpx = fopen("VAR_A.step", "r+b");
//	fread( &B , sizeof(int), 1 , fpx);
//	fclose(fpx);
//	
//	cout<<" B = "<<B<<endl; 
//	
//	
//	
//	
//	
//	FILE *fpt; 
//	fpt = fopen("ABCR.step", "w+");
//	fprintf(fpt , "%d\n", n );
//	for( int i = 0 ; i < n ; i++)
//	{
//		fprintf( fpt, "%d %d %d %d\n", X[i].a , X[i].b, X[i].c, X[i].R);
//	}
//	fclose(fpt);
//	
//	
//	ABC Y[100]; int N ; 
//	fpt = fopen("ABCR.step", "r+");
//	fscanf( fpt , "%d", &N );
//	for( int i = 0 ; i < N ; i++)
//	{
//		fscanf( fpt, "%d%d%d%d", &Y[i].a , &Y[i].b, &Y[i].c, &Y[i].R );
//	}
//	fclose(fpt);
//	
//	cout<<endl; 
//	
//	for( int i = 0 ; i < N  ; i++)
//    { 
//	    cout<<setw(5)<<i+1<<" din "<<N
//	        <<setw(5)<<Y[i].a<<" + "<< Y[i].b << " - " << Y[i].c <<" = " << Y[i].R <<endl; 
//	}
//	 
//  
//  
  
  
  
  
  
//	//   X vectori , X enter user 
//	//   n = random per vector 
//	//   SAVE & LOAD FILE 
//	
//	int MATRIX[1000][100],  X  ; 
//	
//	cout<<" Enter nr. vectori = "; cin>>X; 
//	
//	save_VECTOR_X( "VECTOR_X.step", &X );
//	
//	int XX = load_VECTOR_X( "VECTOR_X.step", MATRIX );
//	
//	
//	
//	  for( int i = 0 ; i < XX ; i++ )
//	  {  
//	    cout<<"\n V"<<i+1<<"["<<MATRIX[i][0]<<"] :: "; 
//	  	for( int j = 1 ; j <= MATRIX[i][0] ; j++ )
//	  	{
//	  	  cout<<" "<<MATRIX[i][j];
//		}
//	}
//	
//
//	
//	
//	
	 
	return  0 ;   
}