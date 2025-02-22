#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        int cardsPerPlayer = n / k;
        int maxJokers = min(cardsPerPlayer, m);

        if(maxJokers < cardsPerPlayer)
            cout << maxJokers << endl;
        else{
            int check = (m - cardsPerPlayer) / (k - 1);
            if((m - cardsPerPlayer) % (k-1) != 0)
                check++;

            int ans = cardsPerPlayer - check;
            cout << ans << endl;
        }
    }

    return 0;
}