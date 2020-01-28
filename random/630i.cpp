
#include <bits/stdc++.h>
using namespace std;

typedef long long LL ;
typedef string S;
typedef double D;
#define pi acos(-1.0)

LL bigpow(LL a , LL b)
{
	LL res = 1 ;
	while(b>0)
	{
		if(b&1) res *= a ;
		a *= a ;
		b >>= 1 ;
	}
	return res ;
}


int main()
{
	LL n;
	cin >> n ;

	LL res = 2*4*3*bigpow(4,n-3)+(n-3)*4*3*3*bigpow(4,n-4) ;
	cout << res << endl;

	
	return 0;
}


/*  // File I/O tools

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
