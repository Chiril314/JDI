#include <iostream>

using namespace std;

int n, a, b;
char *c;

void createString(){
    c = new char[n];
    for(int i = 0; i < n; i++)
        cin >> c[i];
}

int main(){
    cin >> n >> a >> b;
    createString();

    int ans = 0, flag = 0; 
    for(int i = 0; i < n; i++){
        if(c[i] == '*')
            flag = 0;
        else{
            if((a >= b && flag != 1) || (flag == 2 && a > 0)){
                if(a > 0){
                    a--;
                    ans++;
                    flag = 1;
                } else
                    flag = 0;
            } else if((b > a && flag != 2) || (flag == 1 && b > 0)){
                if(b > 0){
                    b--;
                    ans++;
                    flag = 2;
                } else
                    flag = 0;
            } else
                flag = 0;
        }
    }

    cout << ans;
    
    return 0;
}