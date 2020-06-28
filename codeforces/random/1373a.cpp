// Abu Hurayra

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; 
typedef pair<int, int> pi;
#define pi acos(-1.0)



int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
	
	ll t , i ;
	cin >> t ;
	while(t--)
	{
		ll a , b , c ;
		ll x1 , x2 ;
		cin >> a >> b >> c ;
		x1 = (a<c) ? 1 : -1 ;
		x2 = (c<a*b) ? b : -1 ;
		cout << x1 << " " << x2 << endl;		
		
	}
	
	
	
	return 0;
}

