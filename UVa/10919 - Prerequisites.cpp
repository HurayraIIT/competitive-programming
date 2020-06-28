#include<bits/stdc++.h>
using namespace std;

int main()
{
/*
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif */

	int c,m,i,j;
	while(cin>>c)
	{
		if(c==0) return 0;
		cin >> m;
		int tmp=0;
		int sel[10000] = {0} ;
		for(i=0;i<c;i++)
		{
			cin >> j;
			sel[j]=1;
		}
		for(i=0;i<m;i++)
		{
			int a,b;
			cin >> a >> b;
			int lst[a];
			int cnt=0;
			for(j=0;j<a;j++)
			{
				cin >> lst[j];
				if(sel[lst[j]]==1) cnt++;
			}
			if(cnt<b)
			{

				tmp=1;

			}
		}
		if(tmp==0) cout << "yes\n";
		else cout << "no\n";
	}
    return 0;
}
