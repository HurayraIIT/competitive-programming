// Abu Hurayra

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; 
typedef pair<int, int> pi;
#define pi acos(-1.0)



int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
	
	ll t , n , s ;
	cin >> t ;
	while(t--)
	{
		ll ans = 0 ;
		cin >> s >> n ;
		
		while(s>n)
		{
				ans += (s/n);
				s = s % n ;
		}
		
		if(s==1) ans += 1 ;
		else if(s&1) ans += 2 ;
		else if(s!=0) ans += 1 ;
		
		cout << ans << endl;
		
	}
	
	
	
	return 0;
}

