	
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
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n,i,j;
	scanf("%d",&n);
	int a[105][2];
	for(i=0;i<105;i++) a[i][0]=a[i][1]=0;
	for(i=0;i<n;i++)
	{
		int x , y ;
		scanf("%d %d",&x,&y);
		a[x][0]++;
		a[y][1]++;
	}
	int sum = 0 ;
	for(i=1;i<=100;i++)
	{
		sum+=a[i][0]*a[i][1];
	}
	printf("%d\n",sum);
	
	
	return 0;
}