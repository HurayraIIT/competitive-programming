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
	
	int n,m,i,j,p=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		if(i&1)
		{
			REP(j,1,m)
			{
				printf("#");
			}
			printf("\n");
			
		}
		else
		{
			if(p==0)
			{
				REP(j,1,m-1)
				{
					printf(".");
				}
				printf("#\n");
				p=1;
			}
			else
			{
				printf("#");
				REP(j,1,m-1)
				{
					printf(".");
				}
				printf("\n");
				p=0;
			}
			
		}
	}
	
	
	return 0;
}