
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
    
using namespace std; 
        
        
//  TABLOURI    -   multime de valori, unificate prin NUME si TIP_DATE  
        
//   1. VECTOR - tab. valorile caruia sunt ordonate(aranjate) consecutiv 
//	             pe o axa ( LINIE )  	 
        
//    element  -  valoarea pozitionata pe axa 	 
//    VECTOR   [ ]  
    
//    declararea VECTOR 
//    tip_date nume_variabila_tablou[ nr_max_POSIBIL_de_valori ]; 

//    element - nume_variabila_tablou[ pozitia ];
    
//    pozitia - index  



//   2. MATRIX - tab. valorile caruia sunt ordonate(aranjate) consecutiv 
//	             in plan    


//    declararea  
//    tip_date nume_variabila_tablou[ nr_max_de_linii ][ nr_max_de_coloane ]; 

//    element - nume_variabila_tablou[ pozitia_x ][ pozitia_y ];

//   	x = LINII
//   	y = COLOANE 


//  00 01 02 03 
//  10 11 12 13
//  20 21 22 23
//  30 31 32 33



//  3. CUB - tab. valorile caruia sunt amplasate consecutiv in SPATIU 

//  tip_date nume_variabila_tablou[ NR_MAX_de_MATRICI ][ nr_max_de_linii ][ nr_max_de_coloane ];
    
//  element    -    nume_variabila_tablou[ pozitia_Z ][ pozitia_x ][ pozitia_y ]; 
    
        
//   4. SET - este alcatuit din   CUB-uri   [ NR_CUBuri ][][][] 
	
	  	 
	
		
//	1 ora            =    val C       =  1 value 
//	
//	24 ore => 1 zi   = 24 val C       =  24 []
//	
//	1 s.   => 7 zile = 7 * 24 val C   =  7 x 24 [7][24] MATRIX 
//	
//	1 LUNA => 4 s = 4 * 7 * 24 val C  = 4 x 7 x 24 [4][7][24]  CUB 
//	
//	1 AN   => 12 LUNI                 = [12][4][7][24]  SET 
 	   	 
	   	 
	   	 
	int main()
	{
		srand( time(0) );
    
    /// SET 
    
    int SET[10][10][10][10];
	
	for( int NR_CUB = 0 ; NR_CUB < 10 ; NR_CUB++ )  
	{
		for( int MATRIX = 0 ; MATRIX < 10 ; MATRIX++)
		{  
		    for( int i=0 ; i < 10 ; i++ )
		    {
		    	for( int j = 0 ; j < 10 ; j++)
		    	{
		    		
		    		SET[NR_CUB][MATRIX][i][j] = rand()%10; 
		    		
				}
			}
		}
	}
    
    
    
     
    for( int NR_CUB = 0 ; NR_CUB < 10 ; NR_CUB++ )  
	{
		for( int MATRIX = 0 ; MATRIX < 10 ; MATRIX++)
		{  
		    cout<<"\n CUB="<<NR_CUB+1<<", MATRIX = "<<MATRIX+1<<endl;
		    for( int i=0 ; i < 10 ; i++ )
		    {
		    	for( int j = 0 ; j < 10 ; j++)
		    	{
		    		
		    		cout<<" "<<SET[NR_CUB][MATRIX][i][j]; 
		    		
				}
				cout<<endl;
			}
		}
	}
    
    
    //  CUB_X <=> CUB_Y , x,y - enter user 
    
    
    
    
    
    
    
  
//       // CUB 
//       
//       int CUB[50][50][50], NR_MATRIX=10  , n=2 , m=2 ;
//       
//       for( int z = 0 ; z < NR_MATRIX ; z++ )
//       {
//	       	  for(int x=0; x < n ; x++ )
//	       	  {
//		       	  	for(int y = 0 ; y < m ; y++)
//		       	  	{
//		       	  	   CUB[z][x][y] = rand()%10; 
//					}
//			  }
//       } 
//       for( int z = 0 ; z < NR_MATRIX ; z++ )
//       {
//       	      cout<<"\n CUB :: MATRIX = "<<z+1<<endl;
//	       	  for(int x=0; x < n ; x++ )
//	       	  {
//		       	  	for(int y = 0 ; y < m ; y++)
//		       	  	{
//		       	  	   cout<<" "<<CUB[z][x][y]; 
//					}
//					cout<<endl;
//			  }
//       }
//       
//       /*
//       
//       // 1. MAX, MIN per MATRIX 
//       
//       
//       for( int z = 0, MAX , MIN ; z < NR_MATRIX ; z++ )
//       {
//       	      MAX = INT_MIN;
//       	      MIN = INT_MAX;
//	       	  for(int i = 0 ; i < n ; i++ )
//	       	  {
//		       	  	for(int j = 0 ; j < m ; j++)
//		       	  	{
//		       	  	   if( MAX < CUB[z][i][j] ) MAX = CUB[z][i][j]; 
//		       	  	   
//		       	  	   if( MIN > CUB[z][i][j] ) MIN = CUB[z][i][j]; 
//		       	  	   
//					}
//			  }
//			  cout<<"\n CUB :: MATRIX = "<<z+1<<endl;
//			  cout<<" MAX = "<<MAX<<", MIN = "<<MIN<<endl; 
//       }
//       */
//       
//       
//       /*
//       // 2. show DP, DS  per MATRIX 
//       
//       
//       for( int z = 0 ; z < NR_MATRIX ; z++ )
//       {
//       	      cout<<"\n CUB :: MATRIX = "<<z+1<<endl;
//       	      
//       	      cout<<" DP :: "<<endl;
//	       	  for(int i=0; i < n ; i++ )
//	       	  {  
//	       	  	    for(int j = 0 ; j < m ; j++)
//		       	  	{
//				       if( i == j ) cout<<" "<<CUB[z][i][j]; 
//				        else cout<<"  ";
//				    }
//				    cout<<endl;
//			  }
//			  
//			  cout<<" DS :: ";
//	       	  for(int i=0; i < n ; i++ )
//	       	  {  
//				 cout<<" "<<CUB[z][ n-1-i ][ i ]; 
//			  }
//			  cout<<endl;
//			  
//       }
//  
//      */
//      
//      
//      
//      
//      //  MATRIX = 1  <=> MATRIX=X , X enter user 
//      
//       int X = rand()%9+2;
//       
//       cout<<"\n 1 <=> "<<X<<endl;       
//       
//       X--;
//       
//	       	  for(int i = 0, TEMP ; i < n ; i++ )
//	       	  {
//		       	  	for(int j = 0 ; j < m ; j++)
//		       	  	{
//		       	  		        TEMP = CUB[0][i][j];
//		       	  		CUB[0][i][j] = CUB[X][i][j];
//		       	  		CUB[X][i][j] = TEMP;
//		       	  	}
//		      }
//      
//  
//  cout<<endl; 
//  
//     for( int z = 0 ; z < NR_MATRIX ; z++ )
//       {
//       	      cout<<"\n CUB :: MATRIX = "<<z+1<<endl;
//	       	  for(int x=0; x < n ; x++ )
//	       	  {
//		       	  	for(int y = 0 ; y < m ; y++)
//		       	  	{
//		       	  	   cout<<" "<<CUB[z][x][y]; 
//					}
//					cout<<endl;
//			  }
//       }
//  
//  
  
    
    //   X vectori , X - enter user , n = random per vector 
    
    
    // 1. a+b-c, n  =>  R1, R2 ...  => [n] 
	 
    // 2. [] , X  =>  v1[100], v2[100], .....  => [ NR_VECTOR ][ elem_vector ] 
     
    
//    int X ; 
//    
//    int v[10000][51]; 
//    
//    do
//    {
//    	cout<<" Enter X [ 1 ... 10000 ] = ";
//    	cin>>X;
//	}while( X < 1 || X > 10000 );
//    
//    
//    for( int i = 0 ; i < X ; i++ )
//    {
//    	v[i][0] = rand()%40+10; 
//    	
//    	for( int j = 1 ; j <= v[i][0]  ; j++)
//    	{
//    		v[i][j] = rand()%10; 
//		}
//	}
//    
//    cout<<endl; 
//    
//    for( int i = 0 ; i < X ; i++ )
//    {    
//        cout<<" v"<<i+1<<"["<<v[i][0]<<"] : ";
//		for( int j = 1 ; j <= v[i][0]  ; j++)
//    	{
//    		cout<<" "<<v[i][j]; 
//		}
//		cout<<endl;
//	}
//    
//   
   
    return 0;   
}