#include<bits/stdc++.h>
#define ll long long int
#define start ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
 
int main()
{
    start
    ll a, b, x=6;
    cin >> a >> b;
    ll big;
    big=max(a, b);
    ll points;
    points=x-big+1;
    if(points==1) cout << "1/6";
	else if(points==2) cout << "1/3";
	else if(points==3) cout << "1/2";
	else if(points==4) cout << "2/3";
	else if(points==5) cout << "5/6";	
	else if(points==6) cout << "1/1";
    return 0;
}