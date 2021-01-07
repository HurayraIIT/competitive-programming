#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j;
	cin >> n >> m ;
	char a[n][m];
	bool ans = true;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin >> a[i][j];
			
		}
		for(j=1;j<m-1;j++)
		{
			if(a[i][j]!=a[i][j-1] || a[i][j]!=a[i][j+1]) ans = false;
		}
	}
	for(i=1;i<n-1;i++)
	{
		if(a[i][j]==a[i-1][j] || a[i][j]==a[i+1][j]) ans = false;
	}
	if(ans) cout << "YES\n";
	else cout << "NO\n";
	
	
	return 0;
}
