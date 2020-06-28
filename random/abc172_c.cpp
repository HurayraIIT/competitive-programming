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
	
    ll n , m , k ;
    cin >> n >> m >> k ;
    ll a[n] , b[m] ;
    ll i , j ;
    for(i=n-1;i>=0;i--)
    {
    	cin >> a[i] ;
    }
	
	for(i=m-1;i>=0;i--)
	{
		cin >> b[i] ;
	}
	
	i = n-1; j = m-1 ;
	ll cnt = 0 ;
	
	while(i>=0 && j>=0)
	{
		if(a[i]<=b[j])
		{
			if(a[i]<=k)
			{
				k-=a[i];i--;cnt++;continue;
			}
			else
			{
				i--;j--;continue;
			}
		}
		else
		{
			if(b[j]<=k)
			{
				k-=b[j];j--;cnt++;continue;
			}
			else
			{
				i--;j--;continue;
			}
		}
		
	}
	
	while(i>=0)
	{
		if(a[i]<=k)
		{
			k -= a[i];
			cnt++;
		}
		else break;
		i--;
	}
	
	while(j>=0)
	{
		if(b[j]<=k)
		{
			k -= b[j];
			cnt++;
		}
		else break;
		j--;
	}
	
	cout << cnt << endl;
	
	
	return 0;
}

