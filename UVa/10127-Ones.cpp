
#include <bits/stdc++.h>
using namespace std;

typedef long long LL ;
typedef string S;
typedef double D;
#define pi acos(-1.0)


int main()
{
	LL n ;
	while(cin >> n)
	{
		LL m = 1 , i;
		for(i = 1 ; ; i++ )
		{
			if(m%n==0) break;
			m ++ ;
		}
		cout << i << endl;
	}

	
	return 0;
}

/*
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
