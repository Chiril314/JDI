 
	#include <iostream>
	#include <iomanip>
	
	#include <cstring>
	
    #include <cmath>
    
    #include <string>
    
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
	   
	   
	   
	
	
//   Supraincarcarea operatorilor METODA 	

//       =      se supraincarca doar ca metoda 
	  
	
	
	
//     MOSTENIREA  - unificarea mai multor calse 

//     se realizeaza prin : 


//	class BAZA  -----  clasa care se mosteneste 
//	{
//		
//	};
//	 

//  class DERIVATA ----   clasa care mosteneste    

//	class DERIVATA : public BAZA
//	{
//		
//	};


//  protected :    privat COMUN intre clasele care se mostenesc  


//	Mostenirea SIMPLA   - clasa derivat mosteneste o singura clasa de baza
//	Mostenirea MULTIPLA - clasa derivat mosteneste mai multe clase de baza 




// VIRTUALIZAREAZ claselor - omite alocarea de memorie pentru clasa alocata deja ( vitualizam toate NODURILE din MOSTENIRE ) 

//     virtual NUME_CLASA


//    reapelarea   constructorului  -  este posibila doar daca mostenirea este directa 




class A
{
	
  protected :  	
    
  int a = 1;
  	
  public :
  	
  	A(){ cout<<" CONSTRUCTOR  CLASS A "<<&a <<endl;  }
   ~A(){ cout<<"  DESTRUCTOR  CLASS A "<<endl;  }
  
   void mA(){ cout<<" A::mA(), this->a = "<<this->a<<endl;  }
};

class AA : virtual public A
{
	
  protected :  	
    
  int aa = 1;
  	
  public :
  	
  	AA(){ cout<<" CONSTRUCTOR  CLASS AA "<<endl;  }
   ~AA(){ cout<<"  DESTRUCTOR  CLASS AA "<<endl;  }
  
   void mAA(){ cout<<" AA::mAA(), this->aa = "<<this->aa<<endl;  }
};

class B : virtual public A , public AA
{
  int b = 2;
  
  	
  public :
  	
  	B(){ cout<<" CONSTRUCTOR  CLASS B "<<endl;  }
   ~B(){ cout<<"  DESTRUCTOR  CLASS B "<<endl;  }
  
   void mB(){ 
              cout<<" B::mB(), this->b = "<<this->b<<endl;
              cout<<" B::mB(), this->a = "<<this->a<<endl;
            }
};
 
 
//	   -> A
//	 B 
//	   -> AA -> virtual A 
 
 
// clasa STUDENT	  

class OM{
   protected :
   	
   string NUME; 	
   int ANI;
   bool GEN;
   
   public :
   	
   	OM(){}
   	OM(string NUME , int ANI, bool GEN):NUME(NUME),ANI(ANI),GEN(GEN){}
   	
	void SHOW(){}   
};

class STUDENT : public OM{
	protected :
		
    string GRUPA; 
	double MEDIA;	
	
	public:
		STUDENT(){}
		STUDENT(string GRUPA,double MEDIA):GRUPA(GRUPA),MEDIA(MEDIA){}
		
		STUDENT(string NUME , int ANI, bool GEN,string GRUPA,double MEDIA):GRUPA(GRUPA),MEDIA(MEDIA)
		,OM(NUME,ANI,GEN)
		{
		 // this->NUME = NUME ; 
		}
		
		void SHOW(){}
};

class ANGAJAT : public OM
{
	string FUNCTIA;
	int SALARIUL; 
	
};

	int main()
	{   srand(time(0));
    
    
    
    
    STUDENT S("ESS2421ro",0.0);
    
    STUDENT X("JORA Kardan",123,1,"ESS2421ro",11.99);
    
    
    
    
  
//      B OBJECT;
//      
//     // OBJECT.mA();
//      OBJECT.mB();
//     
//        








//      char SIR[256]; 
//      
//           
//      string SIR1 ; 
//      string SIR2 = "STEP 2025"; 
//      string SIR3 = SIR2; 
//      
//      string SIR4(3,'$'); 
//      string SIR5("STEP 2025 ESS2421ro",5,4); 
//      
//      cout<<" SIR4 = " <<SIR4 <<endl;
//      cout<<" SIR5 = " <<SIR5 <<endl;
//      
//      //cout<<" Enter sir = ";
//      //cin>>SIR1;
//      
//      //cout<<" SIR1 = " <<SIR1 <<endl;
//      
//      
//      //cin.getline( SIR , 256 );
//      
////      cout<<" Enter sir = ";
////      getline( cin , SIR1 );
////      cout<<" SIR1 = " <<SIR1 <<endl;
//      
////      cout<<" Enter sir = ";
////      getline( cin , SIR1 , '$' );
////      cout<<" SIR1 = " <<SIR1 <<endl;   
//
//     
//     SIR1 = "STEP";
//     cout<<" SIR1 = " <<SIR1 <<endl;
//     
//     
//     SIR1 = SIR2 + SIR4; 
//     cout<<" SIR1 = " <<SIR1 <<endl;
//     
//	 SIR1 = SIR2 + SIR4; 
//     cout<<" SIR1 = " <<SIR1 <<endl;
//	 
//	 SIR1 += SIR2 + SIR4; 
//     cout<<" SIR1 = " <<SIR1 <<endl; 
//     
//     
//     SIR1= "STEP";
//     
//     for( int i = 0 ; i < SIR1.length() ; i++ ) 
//     {
//     	 cout<<" SIR1["<<i<<"] = " << SIR1[i] <<" , " << SIR1.at(i) <<endl; 
//	 }
//     
//     // SIR1.clear();
//     cout<<" SIR1 = " << ( SIR1.empty() ? SIR1.length() : SIR1.length() ) <<endl;
//     
//     
//     
 

    return 0;
    
}