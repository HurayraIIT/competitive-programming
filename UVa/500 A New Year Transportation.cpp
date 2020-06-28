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
	
	int n,t,i,j,s=0;
	scanf("%d %d",&n,&t);
	int a[n+5];
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
	
	i=1;
	while(i<=n)
	{
		s=i+a[i];
		i+=a[i];
		if(s==t)
		{
			printf("YES\n");
			break;
		}
		if(s>t)
		{
			printf("NO\n");
			break;
		}
	}
	
	
	return 0;
}