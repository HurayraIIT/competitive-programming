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
	
	string s , t ;
	cin >> s >> t ;
	int ans = 0;
	for(int i = 0 ; i < s.length() ; i++ )
	{
		if(s[i]!=t[i]) ans ++;
	}
	cout << ans << endl;
	
	
	
	return 0;
}

