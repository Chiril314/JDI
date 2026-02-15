 
	#include <iostream>
	#include <iomanip>
	
	#include <cstring>
	
    #include <conio.h>
    
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



// Polimorfism - apeleaza metoda din calasa derivata prin POINTER din clasa de baza,
//               daca metoda este virtualizata (virtual) in clasa de BAZA




 
  
class OM  
{
   	
   protected :
   	
   string NUME; 	
   int ANI;
   bool GEN;
   
   public :
        
   	OM(string NUME = "\0" , int ANI = NULL , bool GEN = NULL ):NUME(NUME),ANI(ANI),GEN(GEN){}
   	
   ~OM(){}
   	
	virtual void SHOW()
	{
	  cout<<" NUME = "<<this->NUME<<endl
	      <<"  ANI = "<<this->ANI<<endl
	      <<"  GEN = "<< ( this->GEN ? "M" : "F" )<<endl;
	}   
};

class STUDENT : public OM 
{
	protected :  
		
    string GRUPA; 
	double MEDIA;	
	
	public:
		
		STUDENT(string GRUPA="\0",double MEDIA=NULL):GRUPA(GRUPA),MEDIA(MEDIA){}
		
		STUDENT(string NUME , int ANI, bool GEN,string GRUPA,double MEDIA):GRUPA(GRUPA),MEDIA(MEDIA)
		,OM(NUME,ANI,GEN){}
		 
	   ~STUDENT(){}	
	   
		void SHOW()
		{
		  cout<<" NUME = "<<this->NUME<<endl
		      <<"  ANI = "<<this->ANI<<endl
		      <<"  GEN = "<< ( this->GEN ? "M" : "F" )<<endl
		      <<"GRUPA = "<<this->GRUPA<<endl
		      <<"MEDIA = "<<this->MEDIA<<endl;
		} 
};

class ANGAJAT : public OM
{
	string FUNCTIA;
	int SALARIUL; 
	
		public:
		
		ANGAJAT(string FUNCTIA="\0",int SALARIUL=NULL):FUNCTIA(FUNCTIA),SALARIUL(SALARIUL){}
		
		ANGAJAT(string NUME , int ANI, bool GEN,string FUNCTIA,int SALARIUL):FUNCTIA(FUNCTIA),SALARIUL(SALARIUL)
		,OM(NUME,ANI,GEN){}
		 
	   ~ANGAJAT(){}	
	   
		void SHOW()
		{
		  cout<<"    NUME = "<<this->NUME<<endl
		      <<"     ANI = "<<this->ANI<<endl
		      <<"     GEN = "<< ( this->GEN ? "M" : "F" )<<endl
		      <<" FUNCTIA = "<<this->FUNCTIA<<endl
		      <<"SALARIUL = "<<this->SALARIUL<<endl;
		} 
};
 

class A
{ 
  protected : 
  int a = 1;
  	
  public :
  	 
  	A(){}
   ~A(){}
  
   virtual void m(){ cout<<" A::mA(), this->a = "<<this->a<<endl;  }

};

class B : public A
{
  protected : 	
  int b = 2;
  
  public :
  	
  	B(){}
   ~B(){}
  
   void m(){ cout<<" B::mB(), this->b = "<<this->b<<endl; }
          
};

class C : public B
{
	
  protected :  	
  int c = 3;
  	
  public :
  	
  	C(){}
   ~C(){}
  
   void m(){ cout<<" C::mC(), this->c = "<<this->c<<endl;  }
};







	int main()
	{   srand(time(0));
	
	
	OM *STEP[1000];   
	
	int i=0;
		
			string NUME; 
			int ANI;
		 
			string FUNCTIA;
		    int SALARIUL;
				
			string GRUPA;
			double MEDIA;
	
	while(1)
	{
		system("cls");
		cout<<"\n\n\t   MENIU "<<endl;
		cout<<"\t  1. Insert Student "<<endl;
		cout<<"\t  2. Insert Angajat "<<endl;
		cout<<"\t  3. Show STEP      "<<endl;
		cout<<"\tESC. Exit           "<<endl;
		
		switch( _getch() )
		{
			case 27 : exit(0);
			
			case 49 : 
						 
			cout<<" Enter  nume = "; cin >> NUME;
			cout<<" Enter   ani = "; cin >> ANI;
			cout<<" Enter grupa = "; cin >> GRUPA;
			cout<<" Enter media = "; cin >> MEDIA;
			
			STEP[i] = new STUDENT(NUME,ANI,1,GRUPA,MEDIA);
			
			i++;
			
			break;
			
			case 50 : 
		
			cout<<" Enter    nume = "; cin >> NUME;
			cout<<" Enter     ani = "; cin >> ANI;
			cout<<" Enter functia = "; cin >> FUNCTIA;
			cout<<" Enter salriul = "; cin >> SALARIUL;
			
			STEP[i] = new ANGAJAT(NUME,ANI,1,FUNCTIA,SALARIUL);
			
			i++;
			
			break;
			
			case 51 :
				
				for( int x = 0 ; x < i ; x++ )
				{
				   cout<<" STEP["<<x+1<<"]"<<endl;	 
				   STEP[x]->SHOW();
				}
				
				system("pause");
		}
		
	}
	
	
	
	
	
	
//	A a;
//	  a.m();
//	
//	B b;
//	  b.m();
//	
//	C c;
//	  c.m();
//	
//	  
//    cout<<endl; 
//    
//    A *p = new A;
//    
//       p->m();
//	    
//	   p = &c; 
//	   p->m();  
//	   
//	   p = &b;
//	   p->m();
	      
    

    
	 return  0 ;
	    
	}