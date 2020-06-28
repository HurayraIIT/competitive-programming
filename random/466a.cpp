#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
	
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	
	int cost = 0 ;
	
	if(m>=n && b<=a*n) {cout << b << endl; return 0;} 
	
	if(a<b) cost = (n%m) * a ;
	else if(n%m) cost = b;
	n -= (n%m);
	
	if(m*a<b) cost += n*a;
	else cost +=(n/m)*b;
	
	cout << cost << endl;
	
	
	
	return 0;
}