#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin >> n ;
	int a[n];
	int mn = 1000;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		mn = min(mn,a[i]);
		
	}
	sort(a,a+n);
	int sol = 999;
	for(i=0;i<n;i++)
	{
		if(a[i]>mn)
		{
			sol = a[i];
			break;
		}
	}
	if(sol==999) cout << "NO\n";
	else cout << sol << endl;
	return 0;
}
