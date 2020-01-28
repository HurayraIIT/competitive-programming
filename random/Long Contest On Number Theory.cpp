/*  Name: Abu Hurayra
    Handle: HurayraIIT
    Institute: IIT_JU   */
    
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
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int t,i,j,n,b,cs=0;
	double d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&b);
		d=0;
		for(i=1;i<=n;i++)
		{
			d+=(double) log10(i);
		}
		double dd=log10(b);
		d=d/dd;
		d++;
		int dig=d;
		printf("Case %d: %d\n",++cs,dig);
	}
	
	
	return 0;
}