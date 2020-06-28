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
	
	int n,m,i,j;
	scanf("%d",&n);
	int a[n];
	//int in[n+10];
	LL t=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		t+=a[i];

	}
	//for(i=n-1,j=1;i>=0;i--,j++) in[i]=j;
	sort(a,a+n);
    scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++) scanf("%d",&b[i]);
	for(i=0;i<m;i++)
	{
		LL sum=t;
		int k=b[i];
		
		sum-=a[n-k];
		printf("%lld\n",sum);
		//hi

	}

	
	
	
	return 0;
}