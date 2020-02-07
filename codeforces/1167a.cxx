// HurayraIIT

#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)

typedef long long LL;
typedef vector<int> vi ;

int main()
{
	int t,n;
	cin >> t ;
	while (t--)
	{
		cin >> n ;
		string s ;
		cin >> s ;
		if(n<11){cout << "NO\n"; continue;}
		int l = s.length() ;
		bool flg = false ;
		for ( int i = l - 11 ; i >= 0 ; i-- )
		{
			if(s[i]=='8') { flg = true ; break ; }
		}
		if(flg==true) cout << "YES\n" ;
		else cout << "NO\n" ;
	}
	
	
	return 0;
}

