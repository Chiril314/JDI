#include <iostream>
#include <cstring>

using namespace std;

class message{
    char s[256];
    int slen(){
        int i = 0;
        while(s[i] != 0)
            i++;
        
        return i;
    }

    public:
        void set(){
            cout << "Enter message: ";
            cin.getline(s, 256);
            cout << endl;
        }

        void set(char *m){
            strncpy(s, m, 256);
        }

        const char* get()const{
            return s;
        }

        int len(){
            return slen();
        }

        void clear(){
            s[0] = 0;
        }

        bool isEmpty(){
            return !slen();
        }

        void show(char *m){
            cout << m << (!isEmpty() ? s : "sir fara simboluri") << endl;
        }

        void upcase(){
            for(int i = 0; i < slen(); i++)
                if(s[i] >= 'a' && s[i] <= 'z')
                    s[i] -= 32;
        }

        void lwcase(){
            for(int i = 0; i < slen(); i++)
                if(s[i] >= 'A' && s[i] <= 'Z')
                    s[i] += 32;
        }

        void title(){
            bool flag = true;
            for(int i = 0; i < slen(); i++){
                if(s[i] == ' '){
                    flag = true;
                    continue;
                }

                if(flag && s[i] >= 'a' && s[i] <= 'z'){
                    s[i] -= 32;
                    flag = false;
                    continue;
                } else if(flag && (s[i] < 'a' || s[i] > 'z')){
                    if(s[i] >= 'A' && s[i] <= 'Z')  
                        flag = false;
                    continue;
                }

                if(!flag && s[i] >= 'A' && s[i] <= 'Z')
                    s[i] += 32;
            }
        }
};

int main(){
    message m1;
    m1.set();
    m1.show("m1 = ");

    m1.set("Jora Kardan");
    m1.show("m1 = ");

    cout << "m1 = " << m1.get() << ", length = " << m1.len() << endl;
    m1.clear();
    m1.show("m1 = ");

    m1.set("jora kardan");
    m1.upcase();
    m1.show("m1 = ");


    m1.lwcase();
    m1.show("m1 = ");

    m1.title();
    m1.show("m1 = ");

    m1.set("!^$(#jora ^$*((@kardan");
    m1.title();
    m1.show("m1 = ");    

    return 0;
}