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
	
	int s,n,i,j,t=0;
	scanf("%d %d",&s,&n);
	j=s;
	int a[n][2];
	for(i=0;i<n;i++) scanf("%d %d",&a[i][0],&a[i][1]);

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i][0]>a[j][0])
			{
				int temp=a[i][0];
			a[i][0]=a[j][0];
			a[j][0]=temp;
			temp=a[i][1];
			a[i][1]=a[j][1];
			a[j][1]=temp;
			}
			
		}
	}
	j=s;
	for(i=0;i<n;i++)
	{
		if(s<=a[i][0])
		{
			t=0;
			break;
		}
		else
		{
			s+=a[i][1];
			t=1;
		}
	}
	if(t==1)
	{
		printf("YES\n");
		return 0;
	}
	t=0;
	s=j;
	for(i=n-1;i>=0;i--)
	{
		if(s<=a[i][0])
		{
			printf("NO\n");
			return 0;
		}
		else s+=a[i][1];
	}
	printf("YES\n");
	return 0;
}