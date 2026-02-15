 
	#include <iostream>
	#include <iomanip>
	#include <cstring>
	#include <conio.h>
    #include <string>
    
    #include <exception>
    
	using namespace std; 
    
    //    try  -  catch  -  throw
    
    //    exceptie - de tip date SAU exceptii POO 
    
    //    throw - simulator de exceptii 
    
    //    catch( ... ) - universal 
    
    
    // Exceptii POO - <exception>
    
    
    
    
    
// try
//    {
//    	
//    	// cod vulnerabil 
//    	
//	}
//	catch( exceptie_1 )
//    {
//    	
//    	// cod de prelucrare a exceptiilor 
//    	
//	}
//	catch( exceptie_2 )
//    {
//    	
//    	// cod de prelucrare a exceptiilor 
//    	
//	}
//	....
//	catch( exceptie_N )
//    {
//    	
//    	// cod de prelucrare a exceptiilor 
//    	
//	}
//	   


   void f()
   {
   	  cout<<" f() "<<endl; 
   	  throw 1; 
   }
	
	class TEST
	{
		public:
		 TEST(){ throw 1; }
		~TEST(){}
	};

	int main()
	{   srand(time(0));
	
//	char sir[256]="ITSTEP";
//	
//	string A = "ITSTEP";
//	
//	    try 
//	    {
//	    	throw A; 
//		}
//		catch( bool exceptie )
//		{
//			cout<<" bool try = "<<exceptie<<endl;
//		}
//		catch( int exceptie )
//		{
//			cout<<" int try = "<<exceptie<<endl;
//		}
//		catch( char exceptie )
//		{
//			cout<<" char try = "<<exceptie<<endl;
//		}
//		catch( char exceptie[] )
//		{
//			cout<<" char[] try = "<<exceptie<<endl;
//		}
//		catch( const char exceptie[] )
//		{
//			cout<<" const char[] try = "<<exceptie<<endl;
//		}
//		catch( string exceptie )
//		{
//			cout<<" string try = "<<exceptie<<endl;
//		}
//		catch( ... )
//		{
//				cout<<" ... try ... "<<endl;
//		}
 
 
 
 
    // a/b  
//    
//    int a = 0 , b = 0 ;
//    
//    cout<<" a/b = "<< a/b <<endl; 
//    
//    a = 2 , b = 0 ;
//    
//    cout<<" a/b = "<< a/b <<endl; 


//       int a,b;   a = rand()%2; b = rand()%2;
//	   
//	   cout<<" a = "<<a<<", b = "<<b<<endl; 
//	   cout<<" R = a/b = "<<a<<" / "<<b <<" = ";
//	   
//	   if( a == 0 && b == 0 )
//	   {
//	   	cout<<" Eroare 0/0 "<<endl;
//	   } 
//	   else if( b == 0 )
//	   {
//	   	cout<<" Eroare valoare/0 "<<endl;
//		} 
//	   else
//	   {
//	       double R = (double)a/b; 
//	       cout<< R <<endl; 
//	   }	

//       try
//       {
//       	   int a,b;   a = rand()%4; b = rand()%4;
//	   
//	   cout<<" a = "<<a<<", b = "<<b<<endl; 
//	   cout<<" R = a/b = "<<a<<" / "<<b <<" = ";
//	   
//	   if( a == 0 && b == 0 ) throw " Eroare 0/0 ";
//	   if( b == 0 ) throw " Eroare valoare/0 ";
//	 
//	   double R = (double)a/b; 
//	   cout<< R <<endl; 
//	 
//       }
//       catch( const char exceptie[] )
//       {
//       	   cout<<exceptie<<endl;
//	   }
//    
    
    
//    try
//    {
//    	f();
//	}
//    catch( ... )
//    {
//    	 
//    	cout<<" exceptie din f() "<<endl;
//	}


  
//    try
//    {
//        TEST x;
//	}
//	catch( int )
//    {
//    	cout<<" exceptie din OBJECT int "<<endl;
//	}
//    catch( ... )
//    {
//    	 
//    	cout<<" exceptie din OBJECT  "<<endl;
//	}
//    
    
    ///  POO
    
    	
    	
    try
    {
    	string s = "STEP";
    	
    	cout<<" s = "<<s<<endl;
//    	
//    	s.resize(-1); 
//    	
//    	cout<<" s = "<<s<<endl;
    	
    	
    	cout<<" NEW START "<<endl;
    	
    	int *p = new int[1999999999];
    	
    	cout<<" NEW END "<<endl;
    	
    	throw 123;
	}
	catch( exception &OBJECT )
	{
		cout<<" POO EXCEPTION = "<< OBJECT.what() << endl; 
	}
	catch( ... )
	{
		cout<<" exceptie ... " << endl; 
	}
    
    
    
    
    
    // POO    a/b   INT  
    
    
    
    
    
    
	 return  0 ;
	    
	}