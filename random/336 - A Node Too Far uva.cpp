#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
#define MAX 100000

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int ns,i,j,k,x,y,ttl,cs=1;
	while(scanf("%d",&ns) && ns)
	{
		
		map < int , vector <int> > m;
		map<int,int> lst;
		for(i=1;i<=ns;i++)
		{
			scanf("%d %d",&x,&y);
			m[x].push_back(y);
			m[y].push_back(x);
			if(lst[x]==0) lst[x]=1;
			if(lst[y]==0) lst[y]=1;
		}
		int num=0;
		for(auto g : lst)
		{
			if(g.second==1) num++;
		}
		while(cin >> x >> ttl)
		{
			if(x==0) break;

			map< int , int > visited;
			
			queue<int> q;
			q.push(x);
			visited[x]=1;
			
			int lt=0,count=1;
			while(!q.empty())
			{
				int u=q.front();
				q.pop();
				int l=m[u].size();
				for(i=0;i<l;i++)
				{
					int v=m[u][i];
					if(!visited.count(v))
					{
						q.push(v);
						
						visited[v]=visited[u]+1;
						k=visited[v];
						if(k>ttl+1) lt++;
						else count++;
					}
				}
			}
			lt=num-count;
			if(lst[x]==0) lt=num;
			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cs++,lt,x,ttl);
			
		}
	}
	return 0;
}