#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
	
	long long n,k,t,i;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		long long a[n] , b[k] ;
		for(i=0;i<n;i++)
		{
			cin >> a[i] ;
		}
		sort(a,a+n);
		for(i=0;i<k;i++)
		{
			cin >> b[i] ;
		}
		sort(b,b+k);
		long long flg = k ;
		long long j=n-1 , p=0;
		
		i=0;
		long long sum = 0 ;
		while(flg--)
		{
			if(b[i]==1)
			{
				sum += 2*a[j--];
				i++;
				//cout << "Test " << a[j+1] << endl;
			}
			else if(b[i]==2)
			{
				sum += a[j--];
				sum += a[j--];
				i++;
			}
			else
			{
				sum += a[j--];
				//cout << "Test " << a[j+1] << endl;
				b[i]--;
				sum += a[p];
				//cout << "Test " << a[p] << endl;
				p+=b[i];
				i++;
			}
		}
		cout << sum << endl;
	}
	
	
	
	return 0;
}