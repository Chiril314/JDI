 
	#include <iostream>
	#include <iomanip>
	
	#include <cstring>
  
	using namespace std; 
    
	
//	struct NUME_STRUC
//	{
//	   elem_1 ; 
//	   elem_2 ; 
//	   ...
//	   elem_N ; 
//
//       fun_1(){}
//       fun_2(){}
//       ...
//       fun_N(){}
//       
// 		
//	};
//	
//	NUME_STRUC nume_var; 
//	 
//	    nume_var.elem_1;        nume_var.fun_1(); 
	 
	

//       POO 	

//  1. Incapsularea   - 
//  2. Mostenirea     - 
//  3. Polimorfismul  -  

	
	
	//  1. Incapsularea   -  struct  =>  class 
	
//	class NUME_STRUC
//	{
//	   elem_1 ;   => proprietatea_1 ; 
//	   elem_2 ;   => proprietatea_2 ;  
//	   ...
//	   elem_N ;   => proprietatea_N ; 
//
//       fun_1(){}   => metoda_1(){} 
//       fun_2(){}   => metoda_2(){}
//       ...
//       fun_N(){}   => metoda_N(){}
//       
// 		
//	};
//	
//	NUME_STRUC nume_var;    =>   NUME_CLASS nume_OBJECT; 
//	 
//	    nume_OBJECT.proprietatea_1;        nume_OBJECT.metoda_1(); 
	
	
	
	
	
	
//   corpul class este privat - inchis 




//  1. Zone de securitate

//  1. public :   
//  2. private :
//  3. protected : 


//   2.  Getter si Setter - metode public 

//   1. Setter - seteaza val proprietatii, sunt VOID 

//         void NUME_SETER( param_1 ,.....  ){   }

//   2. Getter - returneaza valaorea 

//	      const tip_date NUME_GETER()const{ return nume_proprietate;  }
	      

//    operator de rezolutie    ::	       
     
//    pointerul inteligent THIS  - garanteaza ca se acceseaza o proprietate sau o metoda 

 
 
 
 
 
//  CONSTRUCTORI  -   metoda automat 

//  1.  public: 
//  2.  numele CLASSEI 
//  3.  nu are TIP_DATE_FUNCTIE    

    
//      class NUME_CLASS
//      {
//      	  public :
//      	  	
//      	  	NUME_CLASS(...){ .... }
//      	  	
//	    };

/// TIP constructuri 

// 1.  con. IMPLICIT -> set val. implicita pentru propritati

//       NUME_CLASS(){ .... }


// 2.  con. SUPRAINCARCAT ->  set val. SETAT DE PROGRAMATOR pentru propritati in momentul CRERII OBJECT 

//       NUME_CLASS( tip_date param_1, ..... ){ .... }


// 3.  con. COPIERE  -> set val.propritati DIN OBJECT 

//       NUME_CLASS( NUME_CLASS &OBJECT_1, ..... ){ .... }




// OBJECT simplu   operator de acces . 
// OBJECT pointer  operator de acces -> 




//    Destructor - metoda automata

//  1.  public: 
//  2.  numele CLASSEI 
//  3.  nu are TIP_DATE_FUNCTIE 
//  4.  ~ 
 
 
// optimizarea constructorilor

  //  1. proprietatile se acceseaza prin : 
  //  2. maximal nu implicam {}
  //  3. valori implicite per parametru
   

// Functii prietene   -    acces la private    
 
//       friend tip_date nume_functie(); 




//  Supraincarcarea operatorilor  -  extinde functionalul operatorilor cu clasele realizate 

//  se apeleaza prin COMBINATIE 

//		tip_date operator OPERATOR( prametri .... )
//		{
//			
//		}
	
	
//   Supraincarcarea operatorilor METODA 	

//       =      se supraincarca doar ca metoda 
	  
	  
	  
    class INT 
	{
		int value;
	 	public : 
	  
		INT(int value = NULL ):value(value){}  
		INT( const INT &OBJECT ):value(OBJECT.value){}
	
	   ~INT(){}	
			
		INT& set( char *message ){ cout<<message;  cin>>this->value;  return *this;	}
		INT& set( int value ){ this->value = value ;   return *this;	}
		INT& set(const INT &OBJECT ){ this->value = OBJECT.value ; return *this;  }
			
		const int get()const{ return this->value; }
				
		INT& show( char *message ){ cout<<message<< this->value <<endl;	return *this; }
		 
		 
		friend int abc( INT& , INT& , INT& );  
		friend int SUMA( INT v[], INT &  );
		
		friend ostream& operator << ( ostream& , INT  );
		friend istream& operator >> ( istream& , INT& );
		
	     friend void Insert( INT v[] , INT&n );
	     friend void Show( INT v[] , INT&n );
	     friend int Max(INT v[], INT&n, bool&W );
	      
	     
	    // friend INT operator+( INT a, INT b );
	     friend INT operator+( INT a, int b );
	     friend INT operator+( int a, INT b );
	     
		 friend INT operator-( INT a, INT b );
	     friend INT operator-( INT a, int b );
	     friend INT operator-( int a, INT b );
		 
		 friend INT operator*( INT a, INT b );
	     friend INT operator*( INT a, int b );
	     friend INT operator*( int a, INT b );
		 
		 friend INT operator/( INT a, INT b );
	     friend INT operator/( INT a, int b );
	     friend INT operator/( int a, INT b );  
	      
	     //   friend INT& operator+( INT&a, INT&b );
	     //   friend int operator+( INT&a, INT&b );
	     
	     
	     // INT = value   =>   INT.=(int)
	     INT& operator=(int value)
	     {
	     	this->value = value;
	     	
	     	return *this;
		 }
		 // INT = INT   =>   INT.=(INT)
		 INT& operator=(INT OBJECT)
	     {
	     	this->value = OBJECT.value; return *this;	     	
		 }
		 
	     // a + b =>  a.+(b)
	     INT operator+( INT b ){ return  INT( value + b.value ); }
	     
	     //   >   >=   <   <=   ==   !=   ! 
	     
	     // INT.>INT   ------  CONBINATIA =>  INT > INT 
	     bool operator > ( INT OBJECT){  return this->value > OBJECT.value; }
	     
	} ;
	
	
	 
	   
//	   COMBINATIA =>     cout  <<   CLASA INT 
//	   
//	   tip_date operator OPERATOR ( pS , pD )
//	   {
//	   	
//	   }
//	   
//	   pS = ostream cout  
//	   pD = CLASA INT
//	   
//	   OPERATOR = << 
	   
	   ostream& operator << ( ostream &OUT , INT OBJECT )
	   {
	   	   OUT << OBJECT.value;
	   	  
	   	  return  OUT;
	   }
	       
	   //  COMBINATIA =>   cin >> INT    
	   istream& operator >> ( istream &IN , INT&OBJECT )
	   {
	   	  IN >> OBJECT.value;
	   	  
	   	  return IN;
	   }    
           
     int abc(  INT& a ,   INT&  b ,   INT&  c )
     {
       int REZ ; 
	   	
	   a.value = rand()%10; 
	   b.value = rand()%10; 
	   c.value = rand()%10; 
	   
	   REZ = a.value + b.value - c.value ; 
	  
	   cout<<" R = a+b-c = "
	       <<a.value <<"+"<<b.value <<"-"<<c.value<<" = " << REZ << endl ;
		  
	   return REZ; 	  
	 }
     int SUMA( INT v[], INT &n )
     {
     	int S = 0 ; 
     	
     	for( int i = 0 ; i < n.value ; i++ ) S += v[i].value;
     	
     	return S;
	 }
      void Insert( INT v[] , INT&n )
      {
      	// for( int i=0; i < n.get(); i++) v[i].set( rand()%10 );
      	 for( int i=0; i < n.value ; i++) v[i].value = rand()%10;
      	
//      	for( int i=0; i < n.value ; i++)
//		{
//		  cout<<" Enter value OBJECT INT ["<<i<<" din "<< n.value <<"]= ";
//		  cin>> v[i] ; 
//		}   
      	     	
	  }
	  void Show( INT v[] , INT&n )
      {
      	// for( int i=0; i < n.get(); i++) cout<<" "<<v[i].get();
      	cout<<" v:: ";
      	for( int i=0; i < n.value ; i++) cout<<" " << v[i] ;
      	cout<<endl; 
	  }
	  int Max(INT v[], INT&n, bool&W )
      {
          int MAX = !W ? v[0].value : v[n.value/2].value ;
          
          for( int i = 1 ; i < n.value ; i++)
          {
          	 if( !W && i <  n.value/2 && MAX < v[i].value ) MAX = v[i].value;
          	 
          	 if(  W && i >= n.value/2 && MAX < v[i].value ) MAX = v[i].value;
		  }
		  
          return MAX;
	  }
	
	
	//   a + b => pS + pD => INT + INT 
	
//	INT&  operator+( INT&a, INT&b )
//	{
//		INT *OBJ = new INT( a.value + b.value );
//		
//		return *OBJ;
//	}
	
	//INT operator+( INT a, INT b ){ return  INT( a.value + b.value ); }
	INT operator+( INT a, int b ){ return  INT( a.value + b );       }	
	INT operator+( int a, INT b ){ return  INT( a + b.value );       }
	
	INT operator-( INT a, INT b ){ return  INT( a.value - b.value ); }
	INT operator-( INT a, int b ){ return  INT( a.value - b );       }	
	INT operator-( int a, INT b ){ return  INT( a - b.value );       }
	
	INT operator*( INT a, INT b ){ return  INT( a.value * b.value ); }
	INT operator*( INT a, int b ){ return  INT( a.value * b );       }	
	INT operator*( int a, INT b ){ return  INT( a * b.value );       }
	
	INT operator/( INT a, INT b ){ return  INT( a.value / b.value ); }
	INT operator/( INT a, int b ){ return  INT( a.value / b );       }	
	INT operator/( int a, INT b ){ return  INT( a / b.value );       }
	
	
//	int operator+( INT&a, INT&b )
//	{
//		return  a.value + b.value  ;
//	}
	
	int main()
	{   srand(time(0));

    
     // a + b 
     
//     INT a = 3, b = 4;
//     
//     INT R = a.get() + b.get();
//     
//     cout<<setw(5) << a <<" + "<<b<<" = "<<R<<endl; 
     
//       INT a,b; 
//	   
//	   cout<<" Enter a= ";
//	   cin>>a;
//	   
//	   cout<<" Enter b= ";
//	   cin>>b;
//	   
//	   INT R = a+b ; // INT + INT => INT 
//	   
//	   cout<<setw(5) << a <<" + "<<b<<" = "<<R<<endl; 
	   
	   
	   
	   
//	   // a+b+c+d
//	    
//	   INT a,b,c=1,d=1; 
//	   
//	   cout<<" Enter a= ";
//	   cin>>a;
//	   
//	   cout<<" Enter b= ";
//	   cin>>b;
//	   
//	   INT R = a+b+c+d ; // INT + INT => INT 
//	   
//	   // pas 1 .  a+b  => R1
//	   // pas 2 . R1+c  => R2
//	   // pas 3 . R2+d  => Rfinal
//	   
//	   cout<<setw(5) << a <<" + "<<b<<" + "<<c<<" + "<<d<<" = "<<R<<endl; 
     
     
     
//     // a+(3+b)
//     
//     INT a=1, b=1; 
//     
//     //INT R = a + (INT(3) + b); 
//     
//     INT R = a + (3 + b); 
//     
//     cout<<setw(5) << a <<" + 3 + "<<b<<" = "<<R<<endl; 
     
     
     
//     //    (a+3)*(3-b)/2 
//
//        INT a=1,b=1;
//        
//        INT R= (a+3)*(3-b)/2 ; // (4)*(2)/2 = 8/2 = 4 
//        
//        cout<<" (a+3)*(3-b)/2 = "<<R<<endl; 
//        


     INT a,b,c,R; 
     
     a = 1 ;          //  supraincarcarea =   
     R = 123+321*a;   //  supraincarcarea = , int+int , int*INT  
     
     b = R;
     
     R = a+b; // 1+444
     
     cout<<" R = "<<R <<endl; 
     cout<<" b = "<<b <<endl; 

     a = 1;
	 b = 2;  
     if( a > b ) cout<<a<<" > "<<b<<endl; 
      else cout<<a<<" <= "<<b<<endl; 
      
     a = 1;
	 b = 2; 
	 c = 3; 
     if( (R=a+c) > b ) cout<<R<<" > "<<b<<endl; 
      else cout<<R<<" <= "<<b<<endl; 

     a = 1;
	 b = 2; 
	 c = 3; 
     if( (a+c) > b ) cout<<(a+c)<<" > "<<b<<endl; 
      else cout<<(a+c)<<" <= "<<b<<endl; 
     
     a = 1;
	 b = 2; 
	 c = 3; 
     if( b > (a+c-b) ) cout<<b<<" > "<<(a+c-b)<<endl; 
      else cout<< b<<" <= "<< (a+c-b)<<endl;
      
      
      
      
      
      //  sa se ajusteze clasa INT cu METODE supraincarcate 
      //   >   >=   <   <=   ==   !=   ! 
      
      
      
      
      
      
      
      
      
       
      //  [] , n  
      //  prin FUN. friend si SUPRAINCARCARE  =>  max din 1/2 indicata 
//   
//      INT v[100], n=rand()%10+2 ; 
//      
//      Insert(v,n);
//      Show(v,n);
//      
//	  bool Q; 
//	  
//	  Q = false;
//      cout<<" 1-1/2 = MAX = "<< Max( v , n , Q ) <<endl;
//      
//      Q = true;
//      cout<<" 2-1/2 = MAX = "<< Max( v , n , Q ) <<endl;
//      
     
      
      
	return 0;	    
}