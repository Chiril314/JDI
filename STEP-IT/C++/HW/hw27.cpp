#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std; 
    
class INT{
    int value;
    public: 
    
        INT(int value = NULL) : value(value){}  
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
        friend int SUMA(INT v[], INT&);

        friend ostream& operator << (ostream&, INT&);
        friend istream& operator >> (istream&, INT&);

        friend void Insert(INT [], INT&);
        friend void Show(INT [], INT&);
        friend int Max(INT [], INT&, bool&);
} ;
	
	
	 
	   
    ostream& operator << (ostream &OUT, INT&OBJECT){
        OUT << OBJECT.value;
        return  OUT;
    }
	       
	          
    istream& operator >> (istream &IN, INT&OBJECT){
        IN >> OBJECT.value;
        return IN;
    }    
       
    int abc(INT& a, INT& b, INT& c){
        int REZ ; 
            
        a.value = rand()%10; 
        b.value = rand()%10; 
        c.value = rand()%10; 
	   
        REZ = a.value + b.value - c.value ; 
        cout << a.value << " + " << b.value << " - " << c.value << " = " << REZ << endl;
		  
	    return REZ; 	  
	}
    
    
    int SUMA(INT v[], INT &n){
        int S = 0 ; 
        
        for(int i = 0; i < n.value; i++) 
            S += v[i].value;
        
        return S;
    }
    
    void Insert(INT v[], INT&n){
        for(int i = 0; i < n.value; i++) 
            v[i].value = rand()%10;
    }

    void Show(INT v[], INT&n){
        cout << "v:: ";
        for(int i = 0; i < n.value; i++) 
            cout << v[i] << ' ';
        cout << endl; 
    }
	  
    int Max(INT v[], INT&n, bool&W){
        int MAX = !W ? v[0].value : v[n.value / 2].value;
        for(int i = 1; i < n.value; i++){
            if(!W && i < n.value / 2 && MAX < v[i].value) 
                MAX = v[i].value;
    
            if(W && i >= n.value / 2 && MAX < v[i].value) 
                MAX = v[i].value;
        }
        
        return MAX;
    }

int main(){   
    srand(time(0));
    
    INT v[100], n = rand()%10+2 ; 
    
    Insert(v, n);
    Show(v, n);
    
    bool Q; 
    
    Q = false;
    cout << "MAX Prima Doime = " << Max(v, n, Q) << endl;
    
    Q = true;
    cout << "MAX A Doua Doime = " << Max(v, n, Q) << endl;

    return 0;
}