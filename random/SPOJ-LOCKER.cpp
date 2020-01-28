
#include <bits/stdc++.h>
using namespace std;

typedef long long LL ;
typedef string S;
typedef double D;
#define pi acos(-1.0)

LL bigMod(LL a , LL b , LL m)
{
	a %= m ;
	LL res = 1 ;
	while(b>0)
	{
		if(b&1) res = (res * a) % m ;
		a = (a*a)%m;
		b >>= 1;
	}
	return res;
}


int main()
{
	
	int t;
	cin >> t ;
	while(t--)
	{
		LL a , b , m = 1000000007;
		cin >> a;

		// Case observation problem
		// divide a in 3's and necessary 2's

		if(a==1)
		{
			cout << 1 << endl;
			continue;
		}
		if(a%3==0)
		{
			b = bigMod(3,a/3,m);
		}
		else if(a%3==1)
		{
			LL x = (a/3)-1;
			LL y = (a - 3*((a/3)-1))/2 ;
			b = ( bigMod(2,y,m) * bigMod(3,x,m)) % m ;
		}
		else
		{
			b = ( 2 * bigMod(3,a/3,m)) % m ;
		}
		cout << b << endl;
	}
	
	return 0;
}

/*
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
