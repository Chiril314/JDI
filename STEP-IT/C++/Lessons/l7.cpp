	#include <iostream>
	
	#include <iomanip>
	
	#include <cstdlib>
	#include <ctime>
	
	#include <conio.h>
 	 
	using namespace std; 
   		 
	int main()
	{
		srand( time(0) );
   
//          1.  FOR   
    
//          for( bloc_1  ;  bloc_2  ;  bloc_3 )
//          {
//             cod	
//		    } 


 //    bloc_1 - initializare  - o data 
 //    bloc_2 - conditie
 //    bloc_3 - pasul   
 
 //    for infinit    for(;;)
 	 
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
	 
	 
	 
	 
	 // 2.  WHILE 
	 
//  	    bloc_1  ;
	 
//          while(  bloc_2  )
//          {
//              cod
//
//          	bloc_3 ; 
//		    }

 
	 // show 10 ori message 
	 
	 
//	 
//	 for( int i = 0 ; i < 10 ;  i++ )
//	 {
//	 	 cout<<" STEP 2025 "<<endl ;
//	 }
//	 
//	 cout<<endl; 
//	 
	 
	 
//	 int i = 0  ;
//	 
//	 while(  i < 10  )
//	 {
//	 	
//	 	 cout<<setw(4)<< i+1 <<" din "<<10<<" STEP 2025 "<<endl ;
//		  
//		  i++;
//	 }




//     // a+b-c , n - random
//     
//	 // 1.1 R   par nr. total de iteratii +1
//     // 1.2 R impar nr. total de iteratii -1
//     
//     // 2. a,b,c pare se ignora iteratia 
//     
//     // 3.1  R == a itaratia creste cu 1 
//     // 3.2  R == b itaratia scade  cu 1 
//     
//     
//     int a,b,c,i,R,n; 
//     
//     n = rand()%10+10; 
//     
//     i=0; 
//     while( i < n )
//     {
//     	a=rand()%10;
//     	b=rand()%10;
//     	c=rand()%10;
//     	
//     	 if( a%2==0 && b%2==0 && c%2==0 )
//		 {
//		    i++;
//		    continue;
//		 }  
//     	
//     	R = a+b-c ;
//     	
//     	cout<<setw(5)<<i+1<<" din "<<n
//     	    <<",  a = "<<a 
//     	    <<",  b = "<<b
//     	    <<",  c = "<<c
//     	    <<",  R = a+b-c = "<< R << endl; 
//     	    
//     	// 1 
//     	
//		 if( R %2 ==0 ) n++;      
//		  else n--;
//		  
//		// 3.1  R == a itaratia creste cu 1 
//		
//		if( R == a ) i++;
//		
//		// 3.2  R == b itaratia scade  cu 1 
//		
//		if( R == b ) i--;
//    
//     	    i++;
//	 }
//     
     
     
     
     
    	 // 3.  DO - WHILE 
	 
//  	    bloc_1  ;
	 
//          
//         do{
//              cod
//
//          	bloc_3 ; 
//		     }while(  bloc_2  ); 
     
     
     
     
     
     
     
     // a+b-c , R % 2 == 0 
//     
//    int a,b,c, R; 
//  	 
//	do{
//	 	a=rand()%10;
//     	b=rand()%10;
//     	c=rand()%10;
//     	
//     	R = a+b-c ; 
//     	
//     	cout<<"   a = "<<a 
//     	    <<",  b = "<<b
//     	    <<",  c = "<<c
//     	    <<",  R = a+b-c = "<< R << endl;
//     	
//	  }while( R%2 == 0 ); 
// 
     
     // a+b-c , n - rand 
     // 1.   a => 0...100, admisibile pare 
     // 1.1  contor a neadmisibil per ITERATIE
     
     // 2.   b => -100...100, admisibile din intervalul -10...10,     contor neadmisibil  
     
     // 3.   c =>  0...200 , admisibile 0...100 , 110...200,     contor neadmisibil 
	  
     
     int n = rand()%10+1000, ca ; 
     
     for( int i=0, a,b,c,R ; i < n ; i++)
     {
     	
     	ca = -1 ;   
     	do
     	{ 
     	
     	   a = rand()%100;
     	   ca++; 
     	   
     	}while( a % 2 != 0 );
     
  	
     	
     	
     	b=rand()%100;
     	c=rand()%100;
     	
     	R = a+b-c ; 
     	
     	cout<<setw(5)<<i+1<<" din "<<n
     	    <<",  a["<<ca<<"] = "<<a 
     	    <<",  b = "<<b
     	    <<",  c = "<<c
     	    <<",  R = a+b-c = "<< R << endl; 
	 }
     
     
     
     
     
     
     
     
     
	 
	 
	 
	 	   
//	//   a+b-c prin meniu per pas 
//	
//	int a,b,c,R; 
//	
//	bool ba = false , bb = false , bc = false , bR = false ; 
//	
//	
//	for(;;)
//	{
//		
//		system("cls");
//		system("color 0A");
//		
//		cout<<"\n\n\t MENIU       "<<endl; 
//		cout<<"\t  1. Enter a     "<<endl; 
//		cout<<"\t  2. Enter b     "<<endl; 
//		cout<<"\t  3. Enter c     "<<endl; 
//		cout<<"\t  4. Show a,b,c  "<<endl; 
//		cout<<"\t  5. Calc a+b-c  "<<endl; 
//		cout<<"\t  6. Show R      "<<endl; 
//		cout<<"\tESC. Exit        "<<endl; 
//		
//		switch( getch() )
//		{
//		   case 49 :
//		   	
//		       system("cls");
//		       cout<<"\n\n\t  MENIU 1. Enter a = "; cin>>a; ba = true; bR = false; 
//			   
//			   break;
//			   
//		   case 50 :
//		   	
//		   	 system("cls");
//		       cout<<"\n\n\t  MENIU 2. Enter b = "; cin>>b; bb = true; bR = false;   
//			   
//			   break;
//			   
//		   case 51 :
//		   	
//		   	 system("cls");
//		       cout<<"\n\n\t  MENIU 3. Enter c = "; cin>>c; bc = true; bR = false;   
//			   
//			   break;
//			   
//			case 52 :
//		   	
//		   	    system("cls");
//		        cout<<"\n\n\t  MENIU 4. Show a,b,c  "<<endl;
//		         
//		        if( ba )
//				  cout<<"\t  a = "<< a <<endl;
//				else 
//				  cout<<"\t  a = Nu are valoare"<<endl;
//				  
//		        if( bb )
//				  cout<<"\t  b = "<< b <<endl;
//				else 
//				  cout<<"\t  b = Nu are valoare"<<endl;
//				  
//			    if( bc )
//				  cout<<"\t  c = "<< c <<endl;
//				else 
//				  cout<<"\t  c = Nu are valoare"<<endl;		        
//		       
//			   system("pause");
//			   
//			   break;   
//			   
//		     case 53 :
//		   	
//		   	    system("cls");
//		        cout<<"\n\n\t  MENIU 5. Calculam a+b-c  "<<endl;
//		        
//		           
//		        if( ba == true && bb && bc )
//				{
//					 R = a+b-c ;
//					 
//					 cout<<"\n\t Sa calculat a+b-c cu succes "<<endl;
//					 
//					 bR = true; 
//					 
//				}
//				else
//				{    
//				     if( !ba ) cout<<"\t  a = Nu are valoare"<<endl;
//				     if( !bb ) cout<<"\t  b = Nu are valoare"<<endl;
//				     if( !bc ) cout<<"\t  c = Nu are valoare"<<endl;
//				     
//					 cout<<"\n\t  NU sa calculat a+b-c "<<endl;
//			    }			       
//		         		         
//			   system("pause");
//			   
//			   break;   
//			   
//			 case 54 :
//		   	
//		   	    system("cls");
//		        cout<<"\n\n\t  MENIU 6. Show R = a+b-c "<<endl;
//		        
//		        if( bR )
//				{
//				   cout<<"\n\t  R = "<<a<<" + "<<b<<" - "<<c<<" = "<<R<<endl;	 
//				}
//				else
//				 {
//				 	   cout<<"\n\t  R = Nu poate fi calculat "<<endl;	 
//				 }
//				 
//			   system("pause");
//			   break; 
//			   
//			case 27 : exit(0); 
//		   	    
//		}   
//	
//	}
//       
//  
		 
		return  0 ;   
	}