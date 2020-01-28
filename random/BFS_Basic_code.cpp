/*  Name: Abu Hurayra
    Handle: HurayraIIT
    Institute: IIT_JU   */

/* Problem: For a given unweighted bigraph, and two nodes A,B
find the shortest path from A to B. Also find the path. */ 

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

#define MAX 100000
vi edges[MAX];


void bfs(int x, int y)
{
	qi q;
	q.push(x);
	int visited[MAX]={0};
	int level[MAX]={0};
	visited[x]=1;
	level[x]=0;
	cout << x << " is level " << level[x] << "\n";
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		int l=edges[u].size();
		for(int i=0;i<l;i++)
		{
			int v=edges[u][i];
			if(!visited[v])
			{
				q.push(v);
				visited[v]=1;
				level[v]=level[u]+1;
				cout << v << " is level " << level[v] << "\n";
			}

		}
	}

}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int e,n,i,j,x,y;
	scanf("%d %d",&n,&e);
	for(i=1;i<=e;i++)
	{
		scanf("%d %d",&x,&y);
		edges[x].push_back(y);
		edges[y].push_back(x);
	}
	
	while(scanf("%d %d",&x,&y) && x && y)
	{
		bfs(x,y);
	}
	
	return 0;
}


/* Code for traversing and searching:

#define MAX 100000
vi edges[MAX];

void bfs(int x, int y)
{
	qi q;
	q.push(x);
	int visited[MAX]={0};
	visited[x]=1;
	cout << x << " ";
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		int l=edges[u].size();
		for(int i=0;i<l;i++)
		{
			int v=edges[u][i];
			if(!visited[v])
			{
				q.push(v);
				visited[v]=1;
				cout << v << " ";
			}

		}
	}
}

*/