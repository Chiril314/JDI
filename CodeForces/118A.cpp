#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int ia='a',ie='e',ii='i',io='o',iu='u',iy='y', iA='A',iE='E',iI='I',iO='O',iU='U',iY='Y';
    string s, ans="";
    cin>>s;
    for (int i = 0; i < s.size(); i++){
        int x=s[i];
        if(x!=ia && x!=ie && x!=ii && x!=io && x!=iu && x!=iy && x!=iA && x!=iE && x!=iI && x!=iO && x!=iU && x!=iY){
            ans+='.';
        if(x>64 && x<91){
            x+=32;
        }
        ans+=(char)x;
        }
	}
	cout<<ans;
	return 0;
}