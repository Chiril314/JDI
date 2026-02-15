#include <iostream>
#include <iomanip>
#include <cstring>
  
using namespace std; 
    
class INT{
    int value;
    public : 

    INT(int value = 0) : value(value){}  
    INT(const INT &OBJECT) : value(OBJECT.value){}

    ~INT(){}	
        
    INT& set(char *message){ 
        cout << message;  
        cin >> this->value;  
        return *this;	
    }

    INT& set(int value){ 
        this->value = value;   
        return *this;	
    }

    INT& set(const INT &OBJECT){ 
        this->value = OBJECT.value; 
        return *this; 
    }
        
    const int get()const{ 
        return this->value; 
    }
            
    INT& show(char *message){ 
        cout << message << this->value << endl;	
        return *this; 
    }
    
    
    friend int abc(INT&, INT&, INT&);  
    friend int SUMA(INT [], INT &);
    
    friend ostream& operator << (ostream&, INT);
    friend istream& operator >> (istream& , INT&);
    
    friend void Insert(INT [], INT&);
    friend void Show(INT [], INT&);
    friend int Max(INT [], INT&, bool&);
        
    
    friend INT operator - (INT a, INT b);
    friend INT operator - (INT a, int b);
    friend INT operator - (int a, INT b);
    
    friend INT operator * (INT a, INT b);
    friend INT operator * (INT a, int b);
    friend INT operator * (int a, INT b);
    
    friend INT operator / (INT a, INT b);
    friend INT operator / (INT a, int b);
    friend INT operator / (int a, INT b);  
    
    INT& operator = (int value){
        this->value = value;
        return *this;
    }

    INT& operator = (INT OBJECT){
        this->value = OBJECT.value; 
        return *this;	     	
    }
    
    INT operator + (INT b){ 
        return INT(value + b.value); 
    }

    INT operator + (int b){ 
        return INT(this->value + b);     
    }	

    INT& operator += (INT b){
        this->value += b.value;
        return *this;
    }

    INT& operator += (int b){
        this->value += b;
        return *this;
    }
    
    friend INT operator + (int a, INT b){ 
        return INT(a + b.value);       
    }
    
    bool operator < (INT OBJECT){  
        return this->value < OBJECT.value; 
    }

    bool operator < (int value){  
        return this->value < value; 
    }
    
    bool operator > (INT OBJECT){ 
        return this->value > OBJECT.value; 
    }
    
    bool operator > (int value){  
        return this->value > value; 
    }

    bool operator <= (INT OBJECT){  
        return this->value <= OBJECT.value; 
    }

    bool operator <= (int value){  
        return this->value <= value; 
    }
    
    bool operator >= (INT OBJECT){ 
        return this->value >= OBJECT.value; 
    }
    
    bool operator >= (int value){  
        return this->value >= value; 
    }
    
    bool operator ! (){  
        return !this->value; 
    }

    bool operator == (INT OBJECT){
        return this->value == OBJECT.value;
    }

    bool operator == (int value){
        return this->value == value;
    }

    bool operator != (INT OBJECT){
        return this->value != OBJECT.value;
    }

    bool operator != (int value){
        return this->value != value;
    }

    INT& operator++(){ 
        this->value++; 
        return *this; 
    }
    
    INT& operator++(int){
        this->value++; 
        return *this; 
    }
} ;
	
	
	 
	   
ostream& operator << (ostream &OUT, INT OBJECT){
    OUT << OBJECT.value;
    
    return  OUT;
}
	         
istream& operator >> (istream &IN, INT&OBJECT){
    IN >> OBJECT.value;
    
    return IN;
}    
   
	
INT operator - (INT a, INT b){ 
    return INT(a.value - b.value); 
}
INT operator - (INT a, int b){ 
    return INT(a.value - b);       
}	
INT operator - (int a, INT b){ 
    return INT(a - b.value);       
}

INT operator * (INT a, INT b){ 
    return INT(a.value * b.value); 
}
INT operator * (INT a, int b){ 
    return INT(a.value * b);       
}	
INT operator * (int a, INT b){ 
    return INT(a * b.value);       
}

INT operator / (INT a, INT b){ 
    return INT(a.value / b.value); 
}
INT operator / (INT a, int b){ 
    return  INT(a.value / b);       
}	
INT operator / (int a, INT b){
    return INT(a / b.value);       
}
	
 
int main(){   
    srand(time(0));


//  sa se ajusteze clasa INT cu METODE supraincarcate 
//   >   >=   <   <=   ==   !=   ! 


    INT a, b;

    a= 3;
    b= 2;

    INT R = a + (3 + b); 

    cout<<" R "<< R <<endl; 

    if( R > a ) cout<<" R > a "<<endl;
        else cout<<" R <= a "<<endl;

    if( R > 3 ) cout<<" R > 3 "<<endl;
        else cout<<" R <= 3 "<<endl;

    return 0; 
}