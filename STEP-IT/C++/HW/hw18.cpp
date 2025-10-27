#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
        
using namespace std; 
	  
int main(){   
    srand(time(0));
      
    struct student{
        char nume[100] = "";
        char grupa[100];
        int ani;
        bool gen;
        double media;
    };

    student s[100];
    int n = rand()%10 + 1;

    for(int i = 0; i < n; i++){
        s[i].nume[0] = 'a' + rand()%26;
        s[i].ani = rand()%50 + 15;
        s[i].gen = rand()%2;
        s[i].media = double(rand()%91 + 10) / 10;
    }

    for(int i = 0; i < n; i++){
        cout << endl << "Student[" << i + 1 << " din " << n << "]" << endl;
        cout << "Nume = " << s[i].nume;
        cout << endl << "Ani = " << s[i].ani;
        cout << endl << "Gen = " << s[i].gen;
        cout << endl << "Media = " << s[i].media << endl;
    }

    struct contor{
        int cm = 0;
        int cf = 0;
    };

    contor c;
    for(int i = 0; i < n; i++)
        if(s[i].gen == 1)
            c.cm++;
        else
            c.cf++;

    cout << endl << c.cm << " persoane de genul masculin";
    cout << endl << c.cf << " persoane de genul feminin";

	struct MEDIA{
	  	double mANI_0 = 0;
	  	double mANI_1 = 0;
	  	double mMEDIA_0 = 0;
	  	double mMEDIA_1 = 0;
	};

    MEDIA m;
 	for(int i = 0; i < n; i++)
        if(s[i].gen){
           	m.mANI_1 += s[i].ani;
           	m.mMEDIA_1 += s[i].media; 
		} else{
		    m.mANI_0 += s[i].ani;
           	m.mMEDIA_0 += s[i].media;
		}

        m.mANI_1 = m.mANI_1 / c.cm;
        m.mMEDIA_1 = m.mMEDIA_1 / c.cm; 
        
        m.mANI_0 /= c.cf;
        m.mMEDIA_0 /= c.cf; 
   
    cout<< endl << "Media ani M = " << m.mANI_1 << endl;
    cout << "Media ani F = " << m.mANI_0 << endl;
    cout << "Media media M = " << m.mMEDIA_1 << endl;
    cout << "Media media F = " << m.mMEDIA_0 << endl << endl;
     
    char nume[20];
    cout << " Enter nume = "; 
    cin >> nume;
     
    bool FKey = 1; 
    for(int i = 0; i < n; i++)
      	if(strstr(s[i].nume, nume)){
            cout << "Student[" << i+1 << "]";
            cout << endl << "Nume = " << s[i].nume;
            cout << endl << "Ani = " << s[i].ani;
            cout << endl << "Gen = " << (s[i].gen ? "M" : "F" );
            FKey = 0; 
		}
      
    if(FKey) 
        cout << endl << " NUMELE \"" << nume << "\" nu a fost gasit" << endl; 
    
	int ID ;
	  
	do{
	    cout << " Alege Studentul dupa ID[1..." << n << "] = ";
	  	cin >> ID;
	} while(ID < 1 || ID > n);
	  
	ID--;
	  
    cout << "Student[" << ID + 1 << "]" << endl;
    cout << "Nume(" << s[ID].nume << ") = ";
    cin >> s[ID].nume;
    cout << "Ani (" << s[ID].ani << ") = ";
    cin >> s[ID].ani;
    cout << "Gen (" << s[ID].gen << ") = "; 
    cin >> s[ID].gen;
    cout << "Media (" << s[ID].media << ") = ";
    cin >> s[ID].media; 

    for(int i = 0; i < n; i++){
        cout << endl << "Student[" << i + 1 << " din " << n << "]" << endl;
        cout << "Nume = " << s[i].nume;
        cout << endl << "Ani = " << s[i].ani;
        cout << endl << "Gen = " << s[i].gen;
        cout << endl << "Media = " << s[i].media << endl;
    }

    return  0 ;   
}