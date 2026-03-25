#include <iostream>

using namespace std;

int a[10000][10000];

int main(){
	int n;
	cin >> n;

    int x = 0;
    for(int i = 1; i <= n; i++){
        if(a[i][i] == 0){
            a[i][i] = 1;
            x++;
        } if(a[i - 1][i] == 0){
            a[i - 1][i] = 1;
            x++;
        } if(a[i + 1][i] == 0){
            a[i + 1][i] = 1;
            x++;
        } if(a[i][i - 1] == 0){
            a[i][i - 1] = 1;
            x++;
        } if(a[i][i + 1] == 0){
            a[i][i + 1] = 1;
            x++;
        }
    }

    a[0][0] = 1;
    a[n + 1][n + 1] = 1;

    x += 2;
    cout << x << endl;

    for(int i = 0; i <= n + 1; i++)
        for(int j = 0; j <= n + 1; j++)
            if(a[i][j] == 1)
			    cout << i << ' ' << j << endl;

    return 0;
}