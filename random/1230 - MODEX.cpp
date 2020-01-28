
#include <bits/stdc++.h>
using namespace std;

typedef long long LL ;
typedef string S;
typedef double D;
#define pi acos(-1.0)

LL bigModRecursive(LL a , LL b , LL m)
{
	a %= m ;
	if(b==0) return 1;
	LL res = bigModRecursive(a,b/2,m);
	if(b&1) return (res*res*a) % m ;
	else return (res*res) % m ;
}


int main()
{
	
	int c;
	cin >> c;
	LL a,b,m;
	while(c--)
	{
		cin >> a >> b >> m ;
		LL res = bigModRecursive(a,b,m);
		cout << res << endl;
	}

	cin >> c ;

	
	return 0;
}

/*
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
