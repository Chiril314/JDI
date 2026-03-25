#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int x, ans = 1, sum;
vector<int> tickets;

void q(int n, int s, vector<int> a){
    sum = s;
    tickets = a;
    x = a.size();
}


void printTickets(){
    for(int i = 0; i < tickets.size(); i++)
        cout << tickets[i] << ' ';
}


int main(){
    int n, s;
    cin >> n >> s;

    vector<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x <= s)
            a.push_back(x);
    }

    sort(a.begin(), a.end());
    q(n, s, a);
    printTickets();
    

    return 0;
}