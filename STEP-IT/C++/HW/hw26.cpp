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

    int suma(){
        if(this->nr_elemente < 1){
            cout << "Nu sunt elemente" << endl;
            return INT_MIN;
        }

        int s = 0;
        for(int i = 0; i < this->nr_elemente; i++)
            s += *(this->elemente[i]);

        return s;
    }

    int min(){
        if(this->nr_elemente < 1){
            cout << "Nu sunt elemente" << endl;
            return INT_MIN;
        }

        int m = 0;
        for(int i = 0; i < this->nr_elemente; i++)
            if(*this->elemente[i] < *this->elemente[m])
                m = i;

        return m;
    }

    int max(){
        if(this->nr_elemente < 1){
            cout << "Nu sunt elemente" << endl;
            return INT_MIN;
        }

        int m = 0;
        for(int i = 0; i < nr_elemente; i++)
            if(*this->elemente[i] > *this->elemente[m])
                m = i;

        return m;
    }

    bool paritate(int ind){
        return !(*this->elemente[ind]) % 2;
    }
		
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

    VECTOR v1, v2(3), v3(3, -1), v4(v2), v5(v1); 

    v1.show("v1: ");
    cout << endl;

    v2.set(3, 888);
    v2.set(1, 777);
    v2.show("v2: ");
    
    cout << endl;

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

    cout << "Suma v2 = " << v2.suma() << endl;

    int MAX_POZ = v2.max();
    cout << "MAX_v2 = " << v2.get(MAX_POZ) << ", pozitia = " << MAX_POZ << endl;


    int MIN_POZ = v3.min();
    cout << "MIN_v3 = " << v3.get(MIN_POZ) << ", pozitia = " << MIN_POZ << endl;

    cout << "paritate MAX_v2 = " << (v2.paritate(MAX_POZ) ? "PAR" : "IMPAR") << endl;
	  
	return  0;
}