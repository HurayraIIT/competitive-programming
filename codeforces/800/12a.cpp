#include <bits/stdc++.h>
using namespace std;

int main()
{
	bool sol = false;
	char c;
	int a[3][3];
	for( int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cin >> c ;
			if(c=='.') a[i][j] = 1 ;
			else a[i][j] = 0 ;
		}
	}

	if(a[0][0]==a[2][2] && a[0][1]==a[2][1] && a[0][2]==a[2][0] && a[1][0] == a[1][2]) sol = true;

	if(sol) cout << "YES\n" ;
	else cout << "NO\n";
	

	return 0;
}
