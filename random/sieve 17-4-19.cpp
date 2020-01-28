#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n ;
	cin >> n ;

	vector<char> is_prime(n+1 , true);
	is_prime[0] = is_prime[1] = false ;

	for(int i = 2 ; i <= n ; i++ )
	{
		if(is_prime[i] && (long long) i*i <= n)
		{
			for(int j = i*i ; j <= n ; j += i)
			{
				is_prime[j] = false ;
			}
		}
	}
	for(int i = 0 ; i <= n ; i++ )
	{
		if(is_prime[i]) cout << i << endl;
	}
	//puts("2");

    return 0;
}




