
#include <bits/stdc++.h>
using namespace std;

typedef long long LL ;
typedef string S;
typedef double D;
#define pi acos(-1.0)




int main()
{
	
	LL t;
	cin >> t;
	while(t--)
	{
		LL a , b ;
		cin >> a >> b ;

		LL m = a , n = b ;

		// Binary Exponentiation

		LL res = 1 ;		
		while(b>0)
		{
			if(b&1) res = (res*a) % 1000;	
			// Mod by 1000 preserves the last 3 digits
			// also avoides overflow
			a = (a*a) % 1000 ;				
			b = b >> 1 ;
		}
		/*
		a ^ b = c
		log(a^b) = log(c)
		b * log(a) = log(c)

		Let, s = b * log(a)
			 s = log(c)
			 10^s = c

		Let, 10^p * 10^q = 10^s
		here, p is int, q is float
		so, 10^p * 10^q = c
			10^q * 100 = first 3 digits of c

		*/
		
		D p = n * log10(m) ;
		D q = p - floor(p) ;
		D lead = pow(10,q) * 100.00 ;


		cout << (int)lead ;
		
		if(res<10) cout << "...00" << res << endl;
		else if(res<100) cout << "...0" << res << endl;
		else cout << "..." << res << endl;

	}
	
	return 0;
}

/*
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
