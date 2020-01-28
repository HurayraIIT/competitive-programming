	
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
	vi v[4];
	for(i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		v[a].PSB(i+1);
	}
	int l1 = v[1].size();
	int l2 = v[2].size();
	int l3 = v[3].size();

	int min = l1;
	if(min>l2) min = l2;
	if(min>l3) min = l3;
	printf("%d\n",min);
	for(i=0;i<min;i++)
	{
		printf("%d %d %d\n",v[1][i],v[2][i],v[3][i]);
	}

	return 0;
}