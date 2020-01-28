	
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
	

	int n,i,j,sum=0;
	int p = 0 ;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{
		if(a[i]>0) p+=a[i];
		else
		{
			p+=a[i];
			if(p<0)
			{
				sum-=p;
				p=0;
			}

			//sum+=p+a[i];
			//p+=a[i];
			//if(p<0) p=0;
		}
	}
	printf("%d\n",sum);
	
	return 0;
}