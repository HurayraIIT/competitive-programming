
#include <bits/stdc++.h>
using namespace std;

typedef long long LL ;
typedef string S;
typedef double D;
#define pi acos(-1.0)

LL bigModIterative( LL a , LL b , LL m )
{
	a %= m ;
	LL res = 1 ;
	while(b>0)
	{
		if(b&1) res = (res*a) % m ;
		a = (a*a) % m ;
		b >>= 1 ; 
	}
	return res ;
}

int main()
{
	
	LL n , k , m = 10000007 ;
	while(cin >> n >> k)
	{
		if(n==0 && k==0) return 0;
		LL res = ( bigModIterative(n,k,m) + 2*bigModIterative(n-1,k,m)+bigModIterative(n,n,m) + 2*bigModIterative(n-1,n-1,m) ) % m ;
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
