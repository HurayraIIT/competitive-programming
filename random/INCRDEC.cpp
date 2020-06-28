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
	
	ll t ;
	cin >> t ;
	while(t--)
	{
		ll n ;
		cin >> n ;
		//cout << n << endl;
		ll a[n] , i , j ;
		for(i=0;i<n;i++)
		{
			cin >> a[i] ;
		}
		
		if(n==1) {cout << "Yes\n" << a[0] << endl;continue;}
		if(n==2 && a[0]!=a[1])
			{cout << "Yes\n" << a[0] << " " << a[1] << endl;continue;}
		else if(n==2) {cout << "NO\n";continue;}
		
		//cout <<"Test" << endl;
		
		sort(a,a+n);
		bool flg = true;
		
		if(a[n-1]==a[n-2]) {cout << "NO\n";continue;}
		for(i=0;i<n-2;i++)
		{
			if(a[i]==a[i+1] && a[i]==a[i+2])
			{
				flg = false;
			}
		}
		if(!flg)  {cout << "NO\n";continue;}
		
		cout << "YES\n";
		for(i=0;i<n-1;i++)
		{
			if(a[i]!=a[i+1])
			{
				cout << a[i] << " ";
			}
			else {cout << a[i] << " " ; i++;}
		}
		cout << a[n-1] ;
		for(i=n-2;i>=0;i--)
		{
			if(a[i]==a[i-1])
			{
				cout << " " <<  a[i] ;
				i--;
			}
		}
		cout << endl;
		
	}
	
	
	
	return 0;
}

