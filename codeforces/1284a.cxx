// HurayraIIT

#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)

typedef long long LL;
typedef vector<int> vi ;

int main()
{
	int n, m, q, y;
	
	cin >> n >> m ;
	
	string s[n+1], r[m+1] ;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> s[i] ;
	}
	
	for (int i = 1; i <= m; i++)
	{
		cin >> r[i] ;
	}
	
	cin >> q ;
	
	for (int i = 1; i <= q; i++)
	{
		cin >> y ;
		if (y==n || y%n==0)
		{
			cout << s[n] ;
		} else cout << s[y%n] ;
		
		if (y==m || y%m==0)
		{
			cout << r[m] ;
		} else cout << r[y%m] ;
		
		cout << endl ;
		
	}
	
		
	
	
	return 0;
}

