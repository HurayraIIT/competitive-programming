	
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
	
	int a ,b ,i=0,j;
	scanf("%d %d",&a,&b);
	if(i< a) i = a;
	if(i<b) i=b;

	if(i==1)
	{
		printf("1/1\n");
	}
	else if(i==2) printf("5/6\n");
	else if(i==3) printf("2/3\n");
	else if(i==4) printf("1/2\n");
	else if(i==5) printf("1/3\n");
	else if(i==6) printf("1/6\n");	
	return 0;
}