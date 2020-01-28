
#include <bits/stdc++.h>
using namespace std;

typedef long long LL ;
typedef string S;
typedef double D;
#define pi acos(-1.0)

int findGCD(int a , int b)
{
	if(b==0) return a;
	else return findGCD(b,a%b);
}

int main()
{
	int t ,a,b;
	cin >> t;
	while(t--)
	{
		cin >> a >> b ;
		if(a<b) swap(a,b);
		int gcd = findGCD(a,b) ;
		int lcm = (a*b) / gcd ;
		cout << gcd << " " << lcm << endl;
	}

	
	return 0;
}

/*
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
