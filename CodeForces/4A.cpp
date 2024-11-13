#include<bits/stdc++.h>
#define ll long long int
#define start ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
 
int main()
{
    start
	ll t;
    	ll n;
    	cin >> n;
    if(n==2)
    {
    	cout << "No";
	}
    else if(n!=2)
    {
		if(n%2==0)
    	{
    	    cout << "Yes";	
		}
    	else if(n%2==1)
    	{
    		cout << "No";
		} 	
   }
    return 0;
}