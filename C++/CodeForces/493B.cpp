#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> techniqueFirst;
    vector<int> techniqueSecond;
    long long pointsFirst = 0, pointsSecond = 0;
    bool check = false; 

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x > 0){
            pointsFirst += x;
            techniqueFirst.push_back(x);
            check = true; 
        } else{
            pointsSecond += -x;
            techniqueSecond.push_back(-x);
            check = false; 
        }
    }

    if(pointsFirst > pointsSecond){
        cout << "first";
        return 0;
    } else if(pointsFirst < pointsSecond){
        cout << "second";
        return 0;
    } else{
        for(int i = 0; i < min(techniqueFirst.size(), techniqueSecond.size()); i++)
            if(techniqueFirst[i] > techniqueSecond[i]){
                cout << "first";
                return 0;
            } else if(techniqueFirst[i] < techniqueSecond[i]){
                cout << "second";
                return 0;
            }

        if(techniqueFirst.size() > techniqueSecond.size())
            cout << "first";
        else if(techniqueFirst.size() < techniqueSecond.size())
            cout << "second";
        else
            if(check)
                cout << "first";
            else
                cout << "second";
    }

    return 0;
}