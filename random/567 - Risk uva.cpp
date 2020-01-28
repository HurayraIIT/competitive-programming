
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
	int t,i,j,n,x,y,cnt=1;
	vi a[25];
	while(scanf("%d",&t)==1)
	{
		for(i=0;i<25;i++) a[i].clear();
		for(i=0;i<t;i++)
		{
			scanf("%d",&x);
			a[1].push_back(x);
			a[x].push_back(1);
		}		
		for(i=2;i<=19;i++)
		{
			scanf("%d",&t);
			for(j=0;j<t;j++)
			{
				scanf("%d",&x);
				a[i].push_back(x);
				a[x].push_back(i);
			}
		}
		scanf("%d",&n);
		printf("Test Set #%d\n",cnt++);
		for(i=1;i<=n;i++)
		{
			scanf("%d %d",&x,&y);
			int mark[21]={0};
			int visited[21]={0};
			qi q;
			q.push(x);
			visited[x]=1;
			while(!q.empty())
			{
				int u=q.front();
				q.pop();
				int l=a[u].size();
				for(j=0;j<l;j++)
				{
					int v=a[u][j];

					if(!visited[v])
					{
						q.push(v);
						mark[v]=mark[u]+1;
						visited[v]=1;
					}
				}
			}
			printf("%2d to %2d:%2d\n",x,y,mark[y]);

		}
		printf("\n");
	}
	
	
	return 0;
}