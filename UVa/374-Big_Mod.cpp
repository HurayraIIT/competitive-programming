
#include <bits/stdc++.h>
using namespace std;

typedef long long LL ;
typedef string S;
typedef double D;
#define pi acos(-1.0)

LL bigModIterative(LL a , LL b , LL m)
{
	a = a % m ;
	LL res  = 1 ;
	while(b>0)
	{
		if(b&1) res = (res*a) % m ;
		a = (a*a) % m ;
		b = b >> 1 ;
	}
	return res;
}


int main()
{
	
	LL a,b,m;
	while(cin>>a>>b>>m)
	{
		LL res = bigModIterative(a,b,m);
		cout << res << endl;
	}

	
	return 0;
}

/*
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
