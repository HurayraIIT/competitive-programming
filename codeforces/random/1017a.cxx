// HurayraIIT

#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)

typedef long long LL;
typedef vector<int> vi ;

int main()
{
	
	int n;
	cin >> n;
	
	int sum[n+1] ;
	
	for (int i = 0; i < n; i++)
	{
		int a,b,c,d;
		cin >> a >> b >> c >> d ;
		sum[i+1] = a+b+c+d ;
	}
	
	int cnt = 0 ;
	
	for (int i = 2; i <= n; i++)
	{
		if(sum[i]>sum[1]) cnt++ ;
	}
	cout << cnt +1 << endl;
	
	
	
	return 0;
}

