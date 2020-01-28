	
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
	 int n, i , j ;
	 scanf("%d",&n);
	 int a[n];
	 for(i=0;i<n;i++) scanf("%d",&a[i]);

	 int m ;
	scanf("%d",&m);
	 for(i=0;i<m;i++)
	 {
	 	int x , y ;
	 	scanf("%d %d",&x,&y);
	 	x--;
	 	
	 	if(x>0) a[x-1] += y-1 ;
	 	if(x<n-1) a[x+1] += a[x] - y ;
	 	a[x] = 0;

	 }
	for(i=0;i<n;i++) printf("%d\n",a[i]);
	
	return 0;
}