#include <iostream>
#include <vector>

using namespace std;

int main(){
    int d, sumTime;
    cin >> d >> sumTime;

    vector<int> minTime(d);
    vector<int> maxTime(d);
    vector<int> schedule(d);
    
    int minTotal = 0, maxTotal = 0;
    for(int i = 0; i < d; i++){
        cin >> minTime[i] >> maxTime[i];
        minTotal += minTime[i];
        maxTotal += maxTime[i];
    }

    if(sumTime < minTotal || sumTime > maxTotal){
        cout << "NO";
        return 0;
    }

    cout << "YES" << endl;
    for(int i = 0; i < d; i++){
        schedule[i] = minTime[i];
        sumTime -= minTime[i];
    }

    for(int i = 0; i < d && sumTime > 0; i++){
        int extra = min(sumTime, maxTime[i] - schedule[i]);
        schedule[i] += extra;
        sumTime -= extra;
    }

    for(int i = 0; i < d; i++)
        cout << schedule[i] << ' ';

    return 0;
}