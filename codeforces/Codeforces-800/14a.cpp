#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n,m,i,j;
	cin >> n >> m ;
	char a[n][m];
	int p=10000,q=10000,x=-1,y=-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin >> a[i][j];
			if(a[i][j]=='*')
			{
				p = min(p,i);
				q = min(q,j);
				x = max(x,i);
				y = max(y,j);
			}
		}
	}
	
	for(i=p;i<=x;i++)
	{
		for(j=q;j<=y;j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
	
	
	
	
	return 0;
}
