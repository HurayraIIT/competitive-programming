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
	
	int n,i,j,t,k,p,l,r,q,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		i=0;
		scanf("%d",&q);

		while(q--)
		{
			scanf("%d",&x);
			if(x==1)
			{
				scanf("%d",&k);
				i=(i+k)%n;
			}
			else if(x==2)
			{
				scanf("%d",&k);
				i=(i-k);
				if(i<0) i+=n;
			}
			else if(x==3)
			{
				scanf("%d %d",&p,&k);
				p+=i;
				p%=n;
				a[p]=k;
			}
			else if(x==4)
			{
				scanf("%d %d",&l,&r);
				l=l+i;
				l%=n;
				r+=i;
				r%=n;
				LL s=0;
				if(l<=r)
				{
					for(j=l;j<=r;j++) s+=a[j];
					cout << s << "\n";
				}
				else
				{
					for(j=l;j<n;j++) s+=a[j];
					for(j=0;j<=r;j++) s+=a[j];
					cout << s << "\n";
				}
			}
		}
	}
	
	
	
	return 0;
}