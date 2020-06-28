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
typedef pair< int,vector<int> > pivi;

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
	
	int n,l,i,j,x,y;
	while(scanf("%d",&n) && n)
	{
		scanf("%d",&l);
		vi edges[n+10];
		int visited[n+10]={0};
		for(i=0;i<l;i++)
		{
			scanf("%d %d",&x,&y);
			edges[x].push_back(y);
			edges[y].push_back(x);
		}
		qi q;
		q.push(x);
		int flag=1;
		visited[x]=1;
		while(!q.empty())
		{
			int u=q.front();
			q.pop();
			int l=edges[u].size();
			for(i=0;i<l;i++)
			{
				int v=edges[u][i];
				if(visited[v]==visited[u])
				{
					flag=0;
					break;
				}
				else if(visited[u]==1 && visited[v]==0)
				{
					visited[v]=2;
					q.push(v);
				}
				else if(visited[u]==2 && visited[v]==0)
				{
					visited[v]=1;
					q.push(v);
				}
			}
			if(flag==0) break;
		}
		if(flag==0) printf("NOT BICOLORABLE.\n");
		else printf("BICOLORABLE.\n");
	}
	
	
	return 0;
}