#include <iostream>
#include <iomanip>
#include <cstring>

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
        for(int i = 0; i < this->nr_elemente; i++)
            delete this->elemente[i];
    
        delete[] this->elemente;
    }
		
    void set(int pozitia, char *message){
        if(pozitia < 0 || pozitia >= this->nr_elemente){
            cout << "Pozitia[" << pozitia << "], nu exista" << endl; 
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
            cout << "Pozitia [" << pozitia << "], nu exista" << endl; 
            return INT_MIN;
        }
    
        return *(this->elemente[pozitia]);
    }
    
    int get(){
        return this->nr_elemente;	
    }
		 
    void add(int nr, int value){
        if(nr < 1){
            cout << "Eroare nr. de elemente" << nr << ", nu poate fi adaugat " << endl;
            return;
        }
        
        int **TEMP = new int*[this->nr_elemente + nr];
        for(int i = 0; i < this->nr_elemente; i++)
            TEMP[i] = this->elemente[i];
            
        for(int i = this->nr_elemente; i < this->nr_elemente + nr; i++)
            TEMP[i] = new int(value);
        
        delete[] this->elemente;
        
        this->elemente = TEMP;  
        this->nr_elemente += nr; 
    } 
		
		
//		int suma(){}
//		int min(){}
//		int max(){}
//		bool paritate(){}
		
		
    void show(char *message){
        if(this->nr_elemente < 1){
            cout << message << "Nu sunt elemente" << endl;
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

    //  int V[520000]; 
    
    //  int *v = new int[10600000001];
    

    // class TABLOU 
    
    VECTOR v1, v2(3), v3(3, -1), v4(v2), v5(v1); 

    v1.show("v1: ");
    cout << endl;

    v2.set(3, 888);
    v2.set(1, 777);
    v2.show("v2: ");
    
    cout << endl;
    
// v3.set(3, "Enter value [3] = ");
// v3.set(2, "Enter value [2] = ");

    v3.add(3, -2);
    v3.show("v3: ");
    cout << "v3 valoarea [2] = " << v3.get(2) << endl; 
    
    cout << endl;
    v4.show("v4: ");
    cout << "v4 are nr. eleme = " << v4.get() << endl; 
    
    cout << endl;
    v5.show("v5: ");
    v5.add(5, 123);
    v5.show("v5: ");
    
    cout << "v5.get(-1) = " << v5.get(-1) << endl;
	  
	return  0;
}