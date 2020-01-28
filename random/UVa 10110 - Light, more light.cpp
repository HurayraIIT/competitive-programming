  
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef string S;
typedef double D;
typedef vector<int> vi;
typedef stack<int> si;
typedef queue<int> qi;
typedef priority_queue<int> pqi;
typedef pair<int,int> pi;

#define pi acos(-1.0)
#define PSB push_back
#define PPB pop_back
#define REP(i,a,b) for(i=a;i<=b;i++)


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	LL n,i,j;
	while(scanf("%lld",&n) && n)
	{
		LL a = (int) sqrt(n);
		

		if(a*a != n) printf("no\n");
		else printf("yes\n");
	}
	
	
	return 0;
}