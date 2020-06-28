
#include <bits/stdc++.h>
using namespace std;

typedef long long LL ;
typedef string S;
typedef double D;
#define pi acos(-1.0)

LL lastDig(LL a , LL b , LL m)
{
	a %= m ;
	LL res = 1 ;
	while(b>0)
	{
		if(b&1) res = (res*a) % 10 ;
		a = (a*a) % 10 ;
		b >>= 1 ;
	}
	return res;
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		LL a,b;
		cin >>a>>b;
		LL res = lastDig(a,b,10) ;
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
