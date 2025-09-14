#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main(){
    srand(time(0));
        
	int a,b,c,R; 
	bool ba, bb, bc, br;
	for(;;){
		system("cls");
		system("color 0A");
		cout << "\n\n\t MENIU       " << endl; 
		cout << "\t  1. Enter a     " << endl; 
		cout << "\t  2. Enter b     " << endl; 
		cout << "\t  3. Enter c     " << endl; 
		cout << "\t  4. Show a,b,c  " << endl; 
		cout << "\t  5. Calc a+b-c  " << endl; 
		cout << "\t  6. Show R      " << endl; 
		cout << "\tESC. Exit        " << endl; 
		switch(getch()){
		   case 49:
		       system("cls");
		       cout << "\n\n\t  MENIU 1. Enter a = ";
		       cin >> a; 
		       ba = true;
			   break;
		   case 50:
		   	 system("cls");
		       cout << "\n\n\t  MENIU 2. Enter b = "; 
		       cin >> b; 
		       bb = true;
			   break;
		   case 51:
		   	 system("cls");
		       cout << "\n\n\t  MENIU 3. Enter c = "; 
		       cin >> c; 
		       bc = true;
			   break;
			case 52:
		   	    system("cls");
		        cout << "\n\n\t  MENIU 4. Show a,b,c  " << endl;
		        if(ba)
		            cout << "\t  a = " << a << endl;
		        else
		            cout << "\t  a = Nu are valoare" << endl;
		            
		        if(bb)
		            cout << "\t  b = " << b << endl;
		        else
		            cout << "\t  b = Nu are valoare" << endl;   
		            
		        if(bc)
		            cout << "\t  c = " << c << endl;
		        else
		            cout << "\t  c = Nu are valoare" << endl;
		            
			   system("pause");
			   break;   
		     case 53:
		   	    system("cls");
		        cout << "\n\n\t  MENIU 5. Calculam a+b-c  " << endl;
		        if(ba && bb && bc){
		            R = a + b - c;
		            cout << "\n\t  Sa calculat a+b-c cu succes" << endl;
		            br = true;
		        } else{
		            if(!ba)
		                cout << "\t  a = Nu are valoare" << endl;
		            
		            if(!bb) 
		                cout << "\t  b = Nu are valoare" << endl;
		          
		            if(!bc)
		                cout << "\t  c = Nu are valoare" << endl;
		        }
			   system("pause");
			   break;   
			 case 54:
		   	    system("cls");
		        cout << "\n\n\t  MENIU 6. Show R = a+b-c = ??? " << endl;
		        if(br){
		            cout << "\n\n\t  R = " << a << " + " << b << " - " << c << " = " << R << endl;
		        } else
		            cout << "\n\t  R = Nu poate fi calculat" << endl;
		        system("pause");
			   break; 
			case 27: 
			    exit(0); 
		}   
	}
	
	return 0;
}