// Abu Hurayra

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi; 
typedef pair<int, int> pi;
#define pi acos(-1.0)



int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
	
	int t;
	cin >> t ;
	while(t--)
	{
		string s ;
		cin >> s ;
		LL ans = 0 ;
		LL flg = -1 ;
		LL n = s.size();
		LL a[n];
		for(int i = 0 ; i < n ; i++ )
		{
			if(!i) a[i] = (s[i]=='-') ? -1 : 1 ;
			else a[i] = a[i-1] + ( (s[i]=='-') ? -1 : 1 ) ;
		}
		for(int i = 0 ; i < n ; i++ )
		{
			if(a[i]==flg)
			{
				ans += i+1 ; flg--;
			}
		}
		ans += n ;
		cout << ans << endl;
	}
	
	
	
	return 0;
}

