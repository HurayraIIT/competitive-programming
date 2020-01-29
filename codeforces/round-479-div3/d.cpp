#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, i, j;
	cin  >> n;
	vector<long long> v(n);
	
	long long next[n] = {0} , pre[n]= {0} ;
	for(i=0;i<n;i++) next[i]=pre[i]=-1;
	
	for ( i = 0 ; i < n ; i++ )
	{
		cin >> v[i] ;
	}
	
	// fix for corner-case n=2 bug
	if(n==2)
	{
		if(v[0]%3==0 && v[0]/3==v[1]) { cout << v[0] << " " << v[1] << endl; return 0; }
		if(v[1]%3==0 && v[1]/3==v[0]) { cout << v[1] << " " << v[0] << endl; return 0; }
		if(v[0]*2==v[1]) { cout << v[0] << " " << v[1] << endl; return 0; }
		if(v[1]*2==v[0]) { cout << v[1] << " " << v[0] << endl; return 0; }
	}
	
	
	for ( i = 0 ; i < n ; i++ )
	{
		for ( j = 0 ; j < n ; j++ )
		{
			
			if(v[i]%3==0)
			{
				if(v[j]==v[i]*2 || v[j]==v[i]/3)
				{
					next[i] = j ;
					pre[j] = i ; break;
				}
			}
			else if(v[j]/2==v[i])
			{
				next[i] = j ;
				pre[j] = i ; break;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(pre[i]==-1)
		{
			while(next[i]!=-1)
			{
				cout << v[i] << " " ;
				i = next[i] ;
			}
			cout << v[i] << endl;
			cout << endl;
			break;
		}
		//cout << i << "\t" << v[i] << "\t" << next[i] << "\t" << pre[i] << endl;
	}
	
		
	
	return 0;
}

