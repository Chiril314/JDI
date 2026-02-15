#include <iostream>
#include <cstring>
#include <climits>
  
using namespace std; 
 
class VECTOR{	   
    int **elemente;
    int nr_elemente;
    
    public: 
    VECTOR(): elemente(nullptr), nr_elemente(0){}
                    
    VECTOR(int nr_elemente, int value = 0){
        if(nr_elemente < 1){
            this->elemente = nullptr; 
            this->nr_elemente = 0; 	
            return;
        }
        
        this->nr_elemente = nr_elemente;
        this->elemente = new int*[this->nr_elemente];
        for(int i = 0; i < this->nr_elemente; i++)
            this->elemente[i] = new int(value);
    }
    
    VECTOR(const VECTOR &OBJECT){
        this->nr_elemente = OBJECT.nr_elemente;
        this->elemente = nullptr; 
        if(this->nr_elemente > 0){
            this->elemente = new int*[this->nr_elemente];
            for(int i = 0; i < this->nr_elemente; i++)
                this->elemente[i] = new int(*OBJECT.elemente[i]);
        }
    }

    ~VECTOR(){
        for(int i = 0; i < nr_elemente; i++)
            delete elemente[i];
        delete[] elemente;
    }

    void set(int pozitia, char *message){
        if(pozitia < 0 || pozitia >= this->nr_elemente){
            cout << "Pozitia [" << pozitia << "], nu exista" << endl; 
            return;
        }
    
        cout << message;
        cin >> *(this->elemente[pozitia]);
    }
		
    void set(int pozitia, int value){
        if(pozitia < 0 || pozitia >= this->nr_elemente){
            cout << "Pozitia[" << pozitia << "], nu exista" << endl; 
            return;
        }
    
        *(this->elemente[pozitia]) = value;
    }

	int get(int pozitia){
        if(pozitia < 0 || pozitia >= this->nr_elemente){
            cout << "Pozitia[" << pozitia << "], nu exista" << endl; 
            return INT_MIN;
        }
		
        return *(this->elemente[pozitia]);
    }
		
    int get(){
        return this->nr_elemente;	
    }
    
    void show(char *message){
        if(this->nr_elemente < 1){
            cout << message << " Nu sunt elemente" << endl;
            return;				
        }
        
        cout << message;
        for(int i = 0; i < this->nr_elemente; i++) 
            cout << ' ' << *(this->elemente[i]); 
        cout << endl; 
    }
};
			  
	  
int main(){   
    srand(time(0));

    VECTOR v1, v2(3), v3(3, -1), v4(v2), v5(v1); 

    v1.show("v1: ");
    v2.show("v2: ");
    v3.show("v3: ");
    v4.show("v4: ");
    v5.show("v5: ");
    
    return  0;
}