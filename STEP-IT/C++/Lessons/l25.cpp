#include <iostream>

using namespace std;

//destructor - metoda se apeleaza automat, cand se elibereeaza memoria obiectului

class INT{
    int value;
    
    public : 
    INT(){ 
        this->value = rand()%5 + 3; 
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

    INT& set(const INT &OBJECT){
        this->value = OBJECT.value;
        return *this;
    }

    INT& show(const char *message){
        cout << message << this->value << endl;
        return *this;
    }

    ~INT(){
        cout << "Destructor" << endl;
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

    INT a;
    
/*
    INT *n = new INT();
    INT *v = new INT[n->get()]();
    for(int i = 0; i < n->get(); i++){
        INT *a = new INT(rand()%10);
        INT *b = new INT(rand()%10);
        INT *c = new INT(rand()%10);

        INT *R = new INT(*a, *b, *c);

        cout << i + 1 << " din " << n->get() << " : ";
        cout << a->get() << " + " << b->get() << " - ";
        cout << c->get() << " = " << R->get() << endl;

        v[i].set(*R).show("Valoare = ").set((R->get() % 2 == 0 ? 0 : 1));

        delete a;
        delete b;
        delete c;
        delete R;
    }

    cout << endl << "Vectorul rezultat:";
    for(int i = 0; i < n->get(); i++)
        cout << ' ' << v[i].get();

    delete[] v;
*/

    return 0;
}