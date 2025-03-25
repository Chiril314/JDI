#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    vector<long long> tickets(n);
    for(long long i = 0; i < n; i++)
        cin >> tickets[i];

    vector<long long> customers(m);
    for(long long i = 0; i < m; i++)
        cin >> customers[i];

    sort(tickets.begin(), tickets.end());

    vector<bool> sold(n, false);
    for(long long i = 0; i < m; i++){
        long long max_price = customers[i];

        long long left = 0, right = n - 1, pos = -1;
        while(left <= right){
            long long mid = left + (right - left) / 2;
            if(tickets[mid] <= max_price){
                pos = mid;
                left = mid + 1;
            } else
                right = mid - 1;
        }

        while(pos >= 0 && sold[pos])
            pos--;

        if(pos == -1)
            cout << -1 << endl;
        else{
            cout << tickets[pos] << endl;
            sold[pos] = true;  
        }
    }

    return 0;
}