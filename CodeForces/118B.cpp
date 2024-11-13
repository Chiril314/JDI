#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int n;
    cin >> n;
    
    
    for(int i=0; i<=n; i++){
        for(int j=i-n;j<i;j++){
            if(j<0) cout<<"  ";
            else cout<<j<<' ';
        }
        for(int j=i;j>=0;j--){
            cout<<j;
            if(j!=0) cout<<' ';
        }
        cout<<endl;
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=-1-i;j<n-1-i;j++){
            if(j<0) cout<<"  ";
            else cout<<j<<' ';
        }
        for(int j=n-i-1;j>=0;j--){
            cout<<j;
            if(j!=0) cout<<' ';
        }
        cout<<endl;
    }
        
 
    return 0;
}