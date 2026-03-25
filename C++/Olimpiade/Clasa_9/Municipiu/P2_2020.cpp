#include <iostream>
#include <fstream>

using namespace std;

int n, groups3, groups5, year = 0;
int year1 = 0, year2 = 0, year3 = 0;

void grouping() {
    if(n % 3 == 0) {
        groups3 = int(n / 3);
        groups5 = 0;
    } else if(n % 3 == 1) {
        groups3 = int((n - 10) / 3);
        groups5 = 2;
    } else {
        groups3 = int((n - 5) / 3);
        groups5 = 1;
    }

    return;
}


int createRobots() {
    int newRobots = int(groups3 * 5 + groups5 * 9);
    n += newRobots;

    return newRobots;
}


void deleteRobots() {
    if(year >= 3) {
        n -= year3;
    }

    return;
}


void swapYears(int newRobots) {
    year3 = year2;
    year2 = year1;
    year1 = newRobots;

    return;
}

int main(){
    ofstream cout("output.txt");
    ifstream cin("input.txt");

    int k;
    cin >> n >> k;

    while(k + 1 != year){
        grouping();
        deleteRobots();
        swapYears(year == 0 ? n : createRobots());

        year++;
    }

    cout << n;
    
    return 0;
}