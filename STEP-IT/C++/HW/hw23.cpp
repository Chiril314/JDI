#include <iostream>
#include <cstring>

using namespace std; 

class INT{
    int value;
    
    public: 
    void set(char *message){
        cout << message;
        cin >> this->value;
    }

    void set(int value){ 
        this->value = value;
    }
    
    const int get()const{ 
        return this->value; 
    }
    
    void show(char *message){
        cout << message << this->value << endl;
    }
    
    void sum(int value){
        this->value += value;	
    }
    
    void sum(INT &OBJECT){
        this->value += OBJECT.value;	
    }
    
    bool paritate(){
        return this->value % 2 == 0;
    }
    
    void maximum(int value){
        this->value = this->value < value  ? value : this->value; 
    }
    
    void maximum(INT &OBJECT){
        this->value = this->value < OBJECT.value  ? OBJECT.value : this->value; 
    }
    
    void minimum(int value){
        this->value = this->value > value ? value : this->value;
    }

    void minimum(INT &OBJECT){
        this->value = this->value > OBJECT.value ? OBJECT.value : this->value;
    }
};
		  
	  
int main(){
    srand(time(0));

    INT a, b, c, R, n;
    INT S, CRP, CRI, MAX, MIN; 

    
    n.set(rand()%8 + 2);
        
    S.set(0);
    CRP.set(0);
    CRI.set(0);
    MAX.set(INT_MIN);
    MIN.set(INT_MAX);
    for(int i = 0 ; i < n.get(); i++){
        a.set(rand()%10);
        b.set(rand()%10);
        c.set(rand()%10);
        
        R.set(a.get() + b.get() - c.get());
        cout << i + 1 << " din " << n.get() << ": "
                << a.get() << " + " 
                << b.get() << " - "
                << c.get() << " = "
                << R.get() << endl;
        
        S.sum(R);
        if(R.paritate()) 
            CRP.sum(1);
        else 
            CRI.sum(1);		
        
        MAX.maximum(R);
        MIN.minimum(R);
    }
        
    S.show("SUMA R = ");
    CRP.show("Contor R par = ");
    CRI.show("Contor R impar = ");
    
    MAX.show("MAX R = ");
    MIN.show("MIN R = ");
    
    return  0 ;   
}