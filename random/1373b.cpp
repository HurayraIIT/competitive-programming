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
	
	int t ;
	cin >> t ;
	while(t--)
	{
		string s ;
		cin >> s ;
		int x = 0 , y = 0 ;
		for(int i = 0 ; i < s.size() ; i++ )
		{
			if(s[i]=='0') x++;
			else y++;
		}
		if(min(x,y)%2==0) cout << "NET\n";
		else cout << "DA\n" ;
	}
	
	
	
	return 0;
}

