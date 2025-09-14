#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std; 
  
  // conv. implicita - tipul de date decide
  // conv. explicita - programatorul intervine

//		1 . var = val  ;
//		2 . var = cin  ; 
//		3 . var = rand ;  
		///  random => x ... y 
		// p.1. calculam numarul de valori din interval
		// p.2. atribuim fun. rand()%p.1. 
		// p.3. adaugam inceputul intervalului 

int main(){
	srand(time(0));


// x => 0...5 , show =>  ZERO, UNU ... 
//      int x = rand()%5; 
//      
//       if( x == 0 ) cout<<" x = "<<x<<", ZERO  "<<endl; 
//  else if( x == 1 ) cout<<" x = "<<x<<", UNU   "<<endl;       
//  else if( x == 2 ) cout<<" x = "<<x<<", DOI   "<<endl; 
//  else if( x == 3 ) cout<<" x = "<<x<<", TREI  "<<endl; 
//  else /*if( x == 4 )*/ cout<<" x = "<<x<<", PATRU "<<endl; 


//      SWITCH  
//      switch( var )
//      {
//      	case var_valoare_1 : .....  
//      	case var_valoare_2 : .....  
//      	...
//      	case var_valoare_N : .....  
//      	
//      	default : ..... 
//	  }

    //   var_valoare =>  int sau char 

//       int x = 1 ; 
//      
//       switch( x )
//	   {
//	   	
//		case 0 :  cout<<" x = 0, ZERO  "<<endl; break; 
//        case 1 :  cout<<" x = 1, UNU   "<<endl; break;        
//        case 2 :  cout<<" x = 2, DOI   "<<endl; break;  
//        
//        default : cout<<" Nu apartine interval 0...2 "<<endl; 
//  
//       }
// 

      //  for i in (1,2,3,4) <= range( START=0 , STOP , pas=1 ) 
//      range(3)        => 0 1 2 
//      
//      range(0, 3, 2 ) => 0 2


    //  1.  FOR   
//          for( bloc_1  ;  bloc_2  ;  bloc_3 )
//          {
//             cod	
//		    } 

//    bloc_1 - initializare  - o data 
//    bloc_2 - conditie
//    bloc_3 - pasul   

    //  show message 10 => STEP 
//    int C = 0 ; 
//    
//    E:
//    C++;
//    cout<<" goto => STEP "<<endl; 
//    
//    if( C < 10 ) goto E; 
//    
//    cout<<endl; 
//    
//    
//    for( int C = 0 ; C < 10 ; C++  ) 
//    {
//        cout<<"for => STEP "<<endl;	
//	}
	 //    iteratia 1 
	 //    bloc_1 
	 //    bloc_2  
	 //    {} 
	 //    bloc_3 
	 //    iteratia 2 
	 //    bloc_2  
	 //    {} 
	 //    bloc_3 
	 //    .... 
	 //    iteratia N 
	 //    bloc_2  
	 //    {} 
	 //    bloc_3

    // cout<<" C = "<< C <<endl; 

    //  a+b-c, n 
//    for( int n=rand()%10+10 , a , b , c , i = 0 , R ; i < n ; i++ )
//    { 
//	  a = rand()%10;	
//	  b = rand()%10;
//	  c = rand()%10;
//	  
//	  R = a+b-c; 
//      
//	  cout<<setw(4)	<< i+1 << " din "<< n 
//	      <<setw(4)	<< a <<" + "<< b << " - "<<c<< " = "<<R<<endl; 
//    	
//	}
//     int n ;   cout<<" Enter n = "; cin >>n ; 
//      
//    
//    for( int  a , b , c , i = 0 , R ; i < n ; i++ )
//    { 
//	  a = rand()%10;	
//	  b = rand()%10;
//	  c = rand()%10;
//	  
//	  R = a+b-c; 
//      
//	  cout<<setw(4)	<< i+1 << " din "<< n 
//	      <<setw(4)	<< a <<" + "<< b << " - "<<c<< " = "<<R<<endl; 
//    	
//	}
//    
//    int n ;   cout<<" Enter n = "; cin >>n ; 
//      
//    double a , b , c ,  R ;
//    
//    for( int  i = 0  ; i < n ; i++ )
//    { 
//	  a = rand()%10 * 1.3 ;	
//	  b = rand()%10 * 1.3 ;
//	  c = rand()%10 * 1.3 ;
//	  
//	  R = a+b-c; 
//      
//	  cout<<setw(4)	<< i+1 << " din "<< n 
//	      <<setw(6)	<< a <<" + "<<setw(5)<< b << " - "<<setw(4)<<c<< " = "<<setw(4)<<R<<endl; 
//    	
//	}


//    
//    //  a+b , n 
//    // 1. SUMA R 
//    // 2. contor R este par si impar 
//	// 3. a este par 
//	// 4. R > 10 EXIT for 
//	
//	 
//    int S =0, CRP =0 , CRI =0  ; 
//    
//    for( int n=rand()%10+10 , a , b , i = 0 , R ; i < n ; i++ )
//    { 
//	  a = rand()%10;
//	  //cout<<setw(4)	<< a <<  endl; 
//	  //if( a%2 == 0 ) continue; 
//	  	
//	  b = rand()%10;
//  
//	  R = a+b; 
//	        
//	  cout<<setw(4)	<< i+1 << " din "<< n 
//	      <<setw(4)	<< a <<" + "<< b << " = "<<R<<endl; 
//	      
//	   S +=R;  
//	   
//	   R%2==0 ? CRP++ : CRI++; 
//	  
//	  
//	  if( R > 10 ) break;  
//	}
//    cout<<" SUMA R = " << S << endl; 
//    cout<<" Contor R par    = " << CRP << endl; 
//    cout<<" Contor R impar  = " << CRI << endl; 
//    
//    
    /// for infinit    for(;;)

//    
//    for( ; ; )
//    {
//    	cout<<" STEP "<<y<<endl;
//	 	 
//	}
//	

	//   a+b-c prin meniu per pas 
	int a,b,c,R; 
	for(;;)
	{
		system("cls");
		system("color 0A");
		cout<<"\n\n\t MENIU       "<<endl; 
		cout<<"\t  1. Enter a     "<<endl; 
		cout<<"\t  2. Enter b     "<<endl; 
		cout<<"\t  3. Enter c     "<<endl; 
		cout<<"\t  4. Show a,b,c  "<<endl; 
		cout<<"\t  5. Calc a+b-c  "<<endl; 
		cout<<"\t  6. Show R      "<<endl; 
		cout<<"\tESC. Exit        "<<endl; 
		switch( getch() )
		{
		   case 49 :
		       system("cls");
		       cout<<"\n\n\t  MENIU 1. Enter a = "; cin>>a; 
			   break;
		   case 50 :
		   	 system("cls");
		       cout<<"\n\n\t  MENIU 2. Enter b = "; cin>>b; 
			   break;
		   case 51 :
		   	 system("cls");
		       cout<<"\n\n\t  MENIU 3. Enter c = "; cin>>c; 
			   break;
			case 52 :
		   	    system("cls");
		        cout<<"\n\n\t  MENIU 4. Show a,b,c  "<<endl;
		        cout<<"\t  a = "<<a<<endl;
		        cout<<"\t  b = "<<b<<endl;
		        cout<<"\t  c = "<<c<<endl; 		        
			   system("pause");
			   break;   
		     case 53 :
		   	    system("cls");
		        cout<<"\n\n\t  MENIU 5. Calculam a+b-c  "<<endl;

			   system("pause");
			   break;   
			 case 54 :
		   	    system("cls");
		        cout<<"\n\n\t  MENIU 6. Show R = a+b-c = ??? "<<endl;

			   system("pause");
			   break; 
			case 27 : exit(0); 

		}   
	}




//     if(  expresie_logica_1 && expresie_logica_2 && ... && expresie_logica_N  ) 
//     
//     if(  expresie_logica_1 || expresie_logica_2 || ... || expresie_logica_N  )


//		x => -50....50 , de n ori,    n - enter user 
//		
//		1.  contor,   X pozitiv   si     X negativ  
//		2.  suma,     X pare negative si X impare pozititve 
//		3.  contor,   X => -50...0, 0...22, 22...49 
//     
//     int x , n , C = 0;
//     
//     
//        E:
//        	
//		cout<<"Enter n [ 1 ... 1000 ] = ";
//		cin>>n; 
//		
//		if( n < 1 || n > 1000 ) goto E; 
//		
//		
//		
//		int  CXP = 0 , CXN = 0 , SXP = 0 , SXN = 0 , CI = 0 ; 
//		
//		EE : 
//		
//		C++;
//		x = rand()%100-50 ; 
//		cout<<setw(4)<<C<<" din "<<n<<setw(7)<<" x = "<<x<<endl; 
//		
//		// 1
//		
//		if( x >= 0 ) CXP++; 
//		   else CXN++;
//		
//		// 2 
//		
//		 if( x%2 == 0 && x  < 0 ) SXP+=x ; 
//	else if( x%2 != 0 && x >= 0 ) SXN+=x ;
//		
//		// 3  
//		
//		//  if(  ( -50>=x && x<0 ) ||  ( 0>=x && x<22 )  ||  ( 22>=x && x<49 ) ) CI++;
//		
//		if( x != 49 ) CI++;
//		 
//		
//		if( C < n ) goto EE;
//		
//		
//		cout<<" CXP = "<<CXP<<endl; 
//		cout<<" CXN = "<<CXN<<endl;
//		// cout<<" CXN = "<<n-CXP<<endl; 
//		
//		cout<<" SXP = "<<SXP<<endl; 
//		cout<<" SXN = "<<SXN<<endl;
//		
//		cout<<" CI = "<< CI <<endl;

	return  0 ;   
}