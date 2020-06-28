#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
	
	int n, p;
	cin >> n >> p ;
	int a[n], pre[n], suf[n]; 
	int sum = -10000000;
	for(int i = 0 ; i < n ; i++ )
	{
		cin >> a[i] ;
		if(i==0)
		{
			pre[i] = a[i]%p;
		}
		else pre[i] = (pre[i-1]+(a[i]%p))%p;
	}
	suf[n-1] = a[n-1]%p;
	for(int i = n-2 ; i>=0;i--)
	{
		suf[i] = (suf[i+1] + a[i]%p)%p;
	}
	
	for(int i = 0 ; i < n-1 ; i++ )
	{
		if(sum<pre[i]+suf[i+1]) sum = pre[i]+suf[i+1];
		//cout << pre[i]+suf[i+1] << " ";
	}
	//cout << endl;
	
	cout << sum << endl;
	
	
	return 0;
}