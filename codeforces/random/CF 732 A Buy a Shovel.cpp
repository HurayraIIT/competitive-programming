	
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
	
	int n,a,i,j;
	scanf("%d %d",&n,&a);
	for(i=1;i<=100000;i++)
	{
		int d = n*i;
		//n=d;
		int s=d-(d/10)*10;

		if(d%10==0 || s==a)
		{
			printf("%d\n",i);
			return 0;
		}
	}
	
	return 0;
}