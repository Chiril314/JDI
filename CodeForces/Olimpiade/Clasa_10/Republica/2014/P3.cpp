#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
    int c;
    cin >> c;

    vector<int> A;
    vector<int> B;

    for(int i = 1; i * i < c; i++){
        for(int j = 1; j < i; j++){
            if((i - j) % 2 == 1 && gcd(i, j) == 1){ 
                int a = i * i - j * j;
                int b = 2 * i * j;
                int check = i * i + j * j;

                if(check == c){
                    if(a > b) 
                        swap(a, b);
                    A.push_back(a);
                    B.push_back(b);
                }
            }
        }
    }

    if(A.empty())
        cout << "NOPE";
    else{
        for(int i = 0; i < A.size() - 1; i++){
            for(int j = i + 1; j < A.size(); j++){
                if(A[i] > A[j] || (A[i] == A[j] && B[i] > B[j])){
                    swap(A[i], A[j]);
                    swap(B[i], B[j]);
                }
            }
        }

        for(int i = 0; i < A.size(); i++)
            cout << A[i] << ' ' << B[i] << ' ' << c << endl;
    }

    return 0;
}