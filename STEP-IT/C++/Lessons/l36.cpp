 
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <iterator>
#include <queue>
#include <stack>

using namespace std; 
 
class VAR{
    int value;

    public :     
    VAR(){}  	
    VAR( int value ){ this->value = value; }  
    VAR( const VAR  &OBJECT ){ this->value = OBJECT.value;	}
    ~VAR(){}	
        
    void set( char *message ){ cout << message; cin >> this->value;	}
    void set( int value ){ this->value = value ;}
        
    const int get()const{ return this->value; }
    
    void show(){ cout << this->value << ' ';	}

    friend istream& operator >> (istream &IN, VAR &OBJ){
        IN >> OBJ.value;
        return IN;
    }
        
    friend ostream& operator << (ostream &OUT, VAR &OBJ){
        OUT << OBJ.value;
        return OUT;
    }
};
	 
	//   STL  
	
	//   1.  Conteinere   -   variabile   
	//   2.  Iteratori    -   pointeri 
	//   3.  Algoritmi    -   
	
int main(){
    srand(time(0));

    // vector<VAR> v(10);
    // for(int i = 0; i < v.size(); i++)
    //     cin >> v[i];

    // for(int i = 0; i < v.size(); i++)
    //     cout << v[i] << ' ';



    // vector<VAR> v(10);
    // for(VAR &val : v)
    //     cin >> val;
    
    // for(VAR &val : v)
    //     cout << val << ' ';



    // int V[] = {3, 2, 1};
    // vector<int> v(V, V + 3);

    // vector<int>::iterator it = v.begin();
    // cout << "it = " << *it << endl;

    // it++;
    // cout << "it = " << *it << endl; 

    // for(vector<int>::iterator i = v.begin(); i != v.end(); i++)
    //     cout << *i << ' ';




    
    // // queue - FIFO - coada container
    // queue<int> q;
    // for(int i = 0; i < 10; i++)
    //     q.push(i);

    // while(!q.empty()){
    //     cout << q.front() << ' ';
    //     q.pop();
    // }




    // // stiva - LIFO - stack container
    stack<int> s;
    for(int i = 0; i < 10; i++)
        s.push(i);

    while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    }

    return 0;	    
}