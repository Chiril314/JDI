#include <iostream>

using namespace std;

bool isPalindrome(int h, int m, int s){
    string hh, mm, ss;

    if(h < 10) 
        hh = '0' + to_string(h);
    else 
        hh = to_string(h);

    if(m < 10) 
        mm = '0' + to_string(m);
    else 
        mm = to_string(m);

    if(s < 10) 
        ss = '0' + to_string(s);
    else 
        ss = to_string(s);

    string time = hh + ':' + mm + ':' + ss;
    string check = string(time.rbegin(), time.rend());

    return time == check;
}

int main(){
    string t;
    cin >> t;

    int h = stoi(t.substr(0, 2));
    int m = stoi(t.substr(3, 2));
    int s = stoi(t.substr(6, 2));

    while(!isPalindrome(h, m, s)){
        s++;
        if(s == 60){
            s = 0;

            m++;
            if(m == 60){
                m = 0;

                h++;
                if(h == 24)
                    h = 0;
            }
        }
    }

    string hh;    
    if(h < 10) 
        hh = '0' + to_string(h);
    else 
        hh = to_string(h);

    string mm;
    if(m < 10) 
        mm = '0' + to_string(m);
    else 
        mm = to_string(m);

    string ss;
    if(s < 10) 
        ss = '0' + to_string(s);
    else 
        ss = to_string(s);

    cout << hh << ':' << mm << ':' << ss;

    return 0;
}