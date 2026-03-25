#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt25 = 0, cnt50 = 0; 
    int bill;

    for(int i = 0; i < n; i++){
        cin >> bill;

        if(bill == 25)
            cnt25++;  
        else if(bill == 50){
            if(cnt25 > 0){ 
                cnt25--;
                cnt50++;
            } else{ 
                cout << "NO";
                return 0;
            }
        } else if(bill == 100){
            if(cnt50 > 0 && cnt25 > 0){  
                cnt50--;
                cnt25--;
            } else if(cnt25 >= 3){  
                cnt25 -= 3;
            } else{
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";

    return 0;
}