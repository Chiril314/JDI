#include <iostream>
#include <cstring>

using namespace std;


// Setter - metode publice care seteaza valoarea proprietatii si obligatori sunt void
//      void NUME_SETER(param1, ...){ }
// Getter - returneaza valoarea proprietatii
//      const tip_date NUME_GETER()const{return nume_proprietate;}
// proprietatile unui obiect obligator sunt private

/*
struct STUD{
    char nume[100];
    double media;

    void insert(){
        cout << "Enter nume: ";
        cin >> nume;
        cout << "Enter media: ";
        cin >> media;
    }

    void show(){
        cout << "nume: " << nume << endl << "media: " << media;
    }
};
*/

class stud{
    char nume[100];
    double media;

    void insert(){
        cout << "Enter nume: ";
        cin >> nume;
        cout << "Enter media: ";
        cin >> media;
    }

    void show(){
        cout << "nume: " << nume << endl << "media: " << media;
    }
    
    public: 
        void insert_show(){
            insert();
            show();
        }

        void set_nume(){
            cout << "Enter nume: ";
            cin >> nume;
        }

        void set_nume(char a[100]){
            strcpy(nume, a);
        }

        const string get_nume()const{
            return nume;
        }

        void set_media(){
            cout << "Enter media: ";
            cin >> media;
        }

        void set_media(double a){
            media = a;
        }

        const double get_media()const{
            return media;
        }

        const int get_media_INT()const{
            return int(media);
        }
};

int main(){
    stud S;
    S.set_nume("Jora Kardan");
    cout << "Nume = " << S.get_nume() << endl;

    S.set_media(10.001);
    cout << "Media = " << S.get_media_INT() << endl;

    return 0;
}