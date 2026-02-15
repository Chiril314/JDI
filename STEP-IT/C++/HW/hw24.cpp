#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std; 

class INT{
    int value;
    
    public : 
    INT(){ 
        this->value = rand()%10 + 3; 
    }
            
    INT(int value){ 
        this->value = value; 
    }

    INT(int x, int y, int z){ 
        this->value = x + y - z; 
    }
    
    INT(int x, int y){ 
        this->value = x + y; 
    }
    
    INT(const INT &OBJECT){ 
        this->value = OBJECT.value;	
    }
    
    INT(const INT &OBJECT_1 , const INT &OBJECT_2){
        this->value = OBJECT_1.value > OBJECT_2.value ? OBJECT_1.value : OBJECT_2.value;
    }

    INT(const INT &OBJECT_1, const INT &OBJECT_2, const INT &OBJECT_3){
        this->value = OBJECT_1.value + OBJECT_2.value - OBJECT_3.value;
    }
    
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
        return this->value % 2 == 0 ;  	
    }
    
    void maximum(int value){
        this->value = this->value < value ? value : this->value; 
    }
    
    void maximum(INT &OBJECT){
        this->value = this->value < OBJECT.value  ? OBJECT.value : this->value; 
    }
     
    bool interval(INT&X, INT&Y){
        return this->value >= X.value && this->value < Y.value; 
    }
};		  
	  
int main(){   
    srand(time(0));

    INT n;
    for(int i = 0; i < n.get(); i++){
        INT a, b, c, R(a, b, c);

        cout << i + 1 << " din " << n.get() << " : ";
        cout << a.get() << " + " << b.get() << " - ";
        cout << c.get() << " = " << R.get() << endl;
    }

    return 0;   
}