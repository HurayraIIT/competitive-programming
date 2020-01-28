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
	
	int a,b,x,y,i,j,k;
	scanf("%d:%d",&a,&b);
	scanf("%d:%d",&x,&y);
	int s=0;
	if(a==x)
	{
	if(a<10) printf("0%d:",a);
	else printf("%d:",a);
	if((b+y)/2<10) printf("0%d\n",(b+y)/2);
	else printf("%d\n",(b+y)/2);
		return 0;
	}
	int p=a*60+b;
	int t=x*60+y;
	
	s=(p+t)/2;
	int q=s/60;
	int w=s-(s/60)*60;
	if(q<10) printf("0%d:",q);
	else printf("%d:",q);
	if(w<10) printf("0%d\n",w);
	else printf("%d\n",w);

	
	
	
	return 0;
}