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

#define MAX 100000
vector<int> edges[MAX];  /// For storing edges (bigraph)
vector<int> cost[MAX];   /// For storing cost (unweighted)

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int N,E,i,j,x,y;  /// N=nodes  E=edges
	scanf("%d %d",&N,&E);

	for(i=1;i<=E;i++)
	{
		scanf("%d %d",&x,&y);
		edges[x].push_back(y);
		edges[y].push_back(x);
		cost[x].push_back(1);
		cost[y].push_back(1);
	}

	int l=edges[3].size();
	for(i=0;i<l;i++)
	{
		printf("%d ",edges[3][i]);
	}
	
	return 0;
}