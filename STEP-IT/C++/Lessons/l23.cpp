#include <iostream>
#include <cstring>

using namespace std;

// operator de rezolutie - ne permite sa accesam o propretate sau metoda
//                         din interiorul unei clase

// this - pointer care garanteaza ca se acceseaza o proprietate sau o metoda

// daca parametrul seteaza valoare proprietatii, parametrul poarta numele proprietatii

class INT{
    int a;
    public:
        void set(char *m);
        void set(int a);

        const int get()const;

        void show(char *m);
};

void INT::set(char *m){
    cout << m;
    cin >> this->a;
    cout << endl;
}
void INT::set(int a){
    this->a = a;
}
const int INT::get()const{
    return this->a;
}   
void INT::show(char *m){
    cout << m << this->a << endl;
}

char s[] = "STEP-IT 2025";
class Message{
    char s[256];

    int slen();

    public:
        void set();
        void set(char *m);
        const char* get()const;

        int len();
        void clear();
        bool isEmpty();

        void show(char *m);
        void showX(char *m);

        void upcase();
        void lwcase();
        void title();
};

    int Message::slen(){
        int i = 0;
        while(this->s[i] != 0)
            i++;
        
        return i;
    }
    void Message::set(){
        cout << "Enter message: ";
        cin.getline(this->s, 256);
        cout << endl;
    }
    void Message::set(char *s){
        strncpy(this->s, s, 256);
    }
    const char* Message::get()const{
        return this->s;
    }
    int Message::len(){
        return this->slen();
    }
    void Message::clear(){
        this->s[0] = 0;
    }
    bool Message::isEmpty(){
        return !this->slen();
    }
    void Message::show(char *s){
        cout << "Message::s = " << this->s << ", ::s = " << ::s << endl;
        cout << s << (!isEmpty() ? this->s : "sir fara simboluri") << endl;
    }
    void Message::showX(char *s){
        cout << "s = " << s << ", this->s = " << this->s << ", ::s = " << ::s << endl;
    }
    void Message::upcase(){
        for(int i = 0; i < slen(); i++)
            if(this->s[i] >= 'a' && this->s[i] <= 'z')
                this->s[i] -= 32;
    }
    void Message::lwcase(){
        for(int i = 0; i < slen(); i++)
            if(this->s[i] >= 'A' && this->s[i] <= 'Z')
                this->s[i] += 32;
    }
    void Message::title(){
        bool flag = true;
        for(int i = 0; i < slen(); i++){
            if(this->s[i] == ' '){
                flag = true;
                continue;
            }

            if(flag && this->s[i] >= 'a' && this->s[i] <= 'z'){
                this->s[i] -= 32;
                flag = false;
                continue;
            } else if(flag && (this->s[i] < 'a' || this->s[i] > 'z')){
                if(this->s[i] >= 'A' && this->s[i] <= 'Z')  
                    flag = false;
                continue;
            }

            if(!flag && this->s[i] >= 'A' && this->s[i] <= 'Z')
                this->s[i] += 32;
        }
    }

// class message{
//     char s[256];
//     int slen(){
//         int i = 0;
//         while(s[i] != 0)
//             i++;
        
//         return i;
//     }

//     public:
//         void set(){
//             cout << "Enter message: ";
//             cin.getline(s, 256);
//             cout << endl;
//         }

//         void set(char *m){
//             strncpy(s, m, 256);
//         }

//         const char* get()const{
//             return s;
//         }

//         int len(){
//             return slen();
//         }

//         void clear(){
//             s[0] = 0;
//         }

//         bool isEmpty(){
//             return !slen();
//         }

//         void show(char *m){
//             cout << m << (!isEmpty() ? s : "sir fara simboluri") << endl;
//         }

//         void upcase(){
//             for(int i = 0; i < slen(); i++)
//                 if(s[i] >= 'a' && s[i] <= 'z')
//                     s[i] -= 32;
//         }

//         void lwcase(){
//             for(int i = 0; i < slen(); i++)
//                 if(s[i] >= 'A' && s[i] <= 'Z')
//                     s[i] += 32;
//         }

//         void title(){
//             bool flag = true;
//             for(int i = 0; i < slen(); i++){
//                 if(s[i] == ' '){
//                     flag = true;
//                     continue;
//                 }

//                 if(flag && s[i] >= 'a' && s[i] <= 'z'){
//                     s[i] -= 32;
//                     flag = false;
//                     continue;
//                 } else if(flag && (s[i] < 'a' || s[i] > 'z')){
//                     if(s[i] >= 'A' && s[i] <= 'Z')  
//                         flag = false;
//                     continue;
//                 }

//                 if(!flag && s[i] >= 'A' && s[i] <= 'Z')
//                     s[i] += 32;
//             }
//         }
// };

int main(){
    // Message m1;
    // m1.set("STEP1");
    // m1.showX("m1 = ");

    // m1.set("Jora Kardan");
    // m1.show("m1 = ");

    // cout << "m1 = " << m1.get() << ", length = " << m1.len() << endl;
    // m1.clear();
    // m1.show("m1 = ");

    // m1.set("jora kardan");
    // m1.upcase();
    // m1.show("m1 = ");


    // m1.lwcase();
    // m1.show("m1 = ");

    // m1.title();
    // m1.show("m1 = ");

    // m1.set("!^$(#jora ^$*((@kardan");
    // m1.title();
    // m1.show("m1 = ");    

    INT a, b, c;
    a.set("Enter a: ");
    b.set("Enter b: ");
    c.set("Enter c: ");

    INT r;
    r.set(a.get() + b.get() + c.get());
    r.show("a + b - c = ");  

    return 0;
}