#include <iostream>
#include <iomanip>
#include <cstring>
#include <conio.h>
#include <string>

using namespace std;

namespace STEP_VARIABILE_FUNCTII_CLASE{
	int a = 123; 
}

namespace SVFC = STEP_VARIABILE_FUNCTII_CLASE;

int a = 321;

class STUDENT{
	string NUME;
		
	public: 		
        virtual void set_NUME() = 0;
        virtual void set_NUME(string NUME) = 0;
		void show(){ 
            cout << "STEP" << endl; 	
        }
};


class STUD : public STUDENT{
    public: 

        string NUME;
        static string NUME_institutie;  

        void set_NUME(){}
        void set_NUME(string NUME){}
	   
        static void set( string value){	   	   
                NUME_institutie = value;
        }
};
    
string STUD::NUME_institutie;

    //  1. namespace
    
    //   -  adresarea directa          std::NUME_INSTRUCTIUNE 
    //   -  includere particulara      using std::NUME_INSTRUCTIUNE
    //      using std::cout; 
    //      using std::endl; 
    
    //   -  includem TOT namespace   
    
    //	namespace NUME
	//	{
	//		corp NAMESPACE
	//	}
	
	
	
	//  2. Proprietati si metode STATICE -   static  
	
	//  proprietati statice  -  exista intro singura copie de memorie pentru toate OBIECTELE
	//  metode statice - prelucreaza doar proprietati statice ( corpul NU vede this ) 	
	
	
	
	//  3. Clase abstracte - concept general, obligator are minim o metoda virtuala PURA  
	
	
	
	//  4. clase sablon  -  seteaza O clasa cu mai multe tipuri de date pentru PROPRIETATI
	


	
//	SCLASA STUDENT => namespace, static, abstract , template
	

	
template <class T> 
class VAR{
    T value;

    public: 
        VAR(){}  	
        VAR(T value){ 
            this->value = value; 
        }  

        ~VAR(){}	
        VAR(const VAR<T> &OBJECT){ 
            this->value = OBJECT.value;	
        }
                
		void set(char *message){ 
            cout << message; 
            cin >> this->value;	
        }

		void set(T value){ 
            this->value = value;
        }
		 
		const T get()const{ 
            return this->value; 
        } 
};
	
	
template <typename T>
void show(char *message, T value){
    cout << message << value << endl; 
}

int main(){
    VAR <int> OBJECT1 = 123; 
    cout << ' ' << OBJECT1.get();
  	
    VAR <double> OBJECT2 = 123.321; 
    cout << ' ' << OBJECT2.get();  

    VAR <char> OBJECT3 = '$'; 
    cout << ' ' << OBJECT3.get(); 
        
    VAR <string> OBJECT4("STEP 2025"); 
    cout << ' ' << OBJECT4.get();     
	   
//  	show( "    int x = " , 777 ); 
//  	show( " double x = " , 777.888 ); 
//  	show( "   char x = " , '$' ); 
  	
  	
//  	STUD s;
//  	
//  	s.show();
  	
//  	STUD x[100]; 
//  	
//  	x[0].NUME = "A1";
//  	x[0].NUME_institutie = "STEP1";
//  	
//  	x[1].NUME = "A2";
//  	x[1].NUME_institutie = "STEP2";
//  	
//  	x[99].NUME = "A3";
//  	x[99].NUME_institutie = "STEP3";
//  	
//  	x[0].set("STEP");
//  	
//  	cout<<"\n            x[0].NUME = "<<x[0].NUME           <<endl;
//  	cout<<" x[0].NUME_institutie = "<<x[0].NUME_institutie<<endl;
//  	
//  	cout<<"\n            x[1].NUME = "<<x[1].NUME           <<endl;
//  	cout<<" x[1].NUME_institutie = "<<x[1].NUME_institutie<<endl;
//  	
//  	cout<<"\n            x[99].NUME = "<<x[99].NUME           <<endl;
//  	cout<<" x[99].NUME_institutie = "<<x[99].NUME_institutie<<endl;



	
//  	int a = 777;
//  	
//  	cout<<"   a = "<<a<<endl; 
//  	cout<<" ::a = "<<::a<<endl;
//  	cout<<"STEP_VARIABILE_FUNCTII_CLASE::a = "  <<  STEP_VARIABILE_FUNCTII_CLASE::a << endl; 
//  	cout<<"SVFC::a = "  <<  SVFC::a << endl; 
//  	
  	//  std::cout << " STEP 2025" << std::endl;  
  	
  	//   cout << " STEP 2025" << endl;   	
  
    
    
    
//    // POO    a/b   INT  
//    
//    
//    double operator/( INT &OBJ )
//    {
//    	
//       if( this->value == 0 && OBJ.value == 0 ) throw " Eroare 0/0 ";
// 	     if( OBJ.value == 0 ) throw " Eroare valoare/0 ";
//			
//       return this->value / double(OBJ.value) ;
//	   }
//    
//    INT a,b; 
//    
//    try
//    {
//       cout<<' '<< a/b ;	
//	   }
//    catch(const char e[])
//    {
//    	cout<<e<<endl; 
//	  }
    
	return 0;
}