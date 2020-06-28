
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;
#define pi acos(-1.0)
 
 
 
int main()
{
	
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
 