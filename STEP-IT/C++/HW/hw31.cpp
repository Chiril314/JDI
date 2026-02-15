#include <iostream>
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

//	class DERIVATA : tip_mostenire BAZA
//	{
//		
//	};





//  protected :    privat COMUN intre clasele care se mostenesc  


//	Mostenirea SIMPLA   - clasa derivat mosteneste o singura clasa de baza
//	Mostenirea MULTIPLA - clasa derivat mosteneste mai multe clase de baza 


// VIRTUALIZAREAZ claselor - omite alocarea de memorie pentru clasa alocata deja ( vitualizam toate NODURILE din MOSTENIRE ) 

//     virtual NUME_CLASA


//    reapelarea   constructorului  -  este posibila doar daca mostenirea este directa 

// probleme. mostenirii  -  metodele si proprietatile  cu acelas nume - 

//  OBJECT.NUME_CLASS_BAZA::METODA(); 

//  OBJECT.NUME_CLASS_BAZA::PROPRIETATE = valoare ; 


// TIPurile de MOSTENIRE  -  se realizeaza prin una din cele 3 ZONE de securitate 


//  1. M. public    -       extinde functionalul clasei si OBJECT 
       
//     1.1  clasa de baza  public     => clasa derivata public
//     1.2  clasa de baza  protected  => clasa derivata protected
//     1.3  clasa de baza  private    => NU SE mosteneste
     
//  2. M. protected  -     extinde functionalul clasei 
       
//     2.1  clasa de baza  public     => clasa derivata protected
//     2.2  clasa de baza  protected  => clasa derivata protected
//     2.3  clasa de baza  private    => NU SE mosteneste     
	    
//  3. M. private    -     extinde functionalul DOAR pentru O SINGURA clasa
       
//     2.1  clasa de baza  public     => clasa derivata private
//     2.2  clasa de baza  protected  => clasa derivata private
//     2.3  clasa de baza  private    => NU SE mosteneste     



// Polimorfism - apeleaza metoda calasa derivata prin POINTER din clasa de baza




 
  
class OM{
    protected:
        string NUME; 	
        int ANI;
        bool GEN;
    public:
        int test_pro;    
   	    OM(string NUME = "\0", int ANI = NULL, bool GEN = NULL) : NUME(NUME), ANI(ANI), GEN(GEN){}
        ~OM(){}
   	
        void SHOW(){
            cout << "NUME = " << this->NUME << endl;
            cout << "ANI = " << this->ANI << endl;
            cout << "GEN = " << (this->GEN ? "M" : "F") << endl;
        }   
};

class STUDENT : protected OM{
	protected:  
        string GRUPA; 
        double MEDIA;	
	public:
        int test_pro; 
		STUDENT(string GRUPA = "\0", double MEDIA = NULL) : GRUPA(GRUPA), MEDIA(MEDIA){}
		STUDENT(string NUME, int ANI, bool GEN, string GRUPA, double MEDIA) : GRUPA(GRUPA), MEDIA(MEDIA), OM(NUME, ANI, GEN){}
        ~STUDENT(){}	
        void SHOW(){
		    cout << "NUME = " << this->NUME << endl;
		    cout << "ANI = " << this->ANI << endl;
		    cout << "GEN = " << (this->GEN ? "M" : "F") << endl;
		    cout << "GRUPA = " << this->GRUPA << endl;
		    cout << "MEDIA = " << this->MEDIA << endl;
		} 
};

class ANGAJAT : public OM{
	string FUNCTIA;
	int SALARIUL; 
};
 

class A{ 
    protected: 
        int a = 1;     
    public:
        A(){ 
            cout << "CONSTRUCTOR CLASS A" << endl;  
        }
        
        ~A(){ 
            cout << "DESTRUCTOR CLASS A" << endl;  
        }

        void m(){ 
            cout << "A::mA(), this->a = " << this->a << endl;  
        }
};

class B : public A{
    protected: 	
        int b = 2;      
    public:
        B(){ 
            cout << "CONSTRUCTOR CLASS B" << endl;  
        }
        
        ~B(){ 
            cout << "DESTRUCTOR CLASS B" << endl;  
        }
        
        void m(){ 
            cout << "B::mB(), this->b = " << this->b << endl; 
        }        
};

class C : public B{
    protected:  	
        int c = 3;      
    public:
        C(){ 
            cout << "CONSTRUCTOR CLASS C" << endl;  
        }
        
        ~C(){ 
            cout << "DESTRUCTOR CLASS C" << endl;  
        }
            
        void m(){ 
            cout << "C::mC(), this->c = " << this->c << endl;  
        }
};

int main(){   
    srand(time(0));

	return 0;
}