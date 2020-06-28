	
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
	
	int n , i,j;
	scanf("%d",&n);
	int a[n];
	int x =0 , y = 0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]) y++;
		if(!a[i]) x++;
	}


	int c=0,d=0,e=0,f=0;
	for(i=0,j=n-1;i<n,j>=0;i++,j--)
	{
		if(a[i]==0)
		{
			c++;

		}
		else
		{
			d++;
		}/*
		if(a[j]==0)
		{
			e++;
		}
		else
		{
			f++;
		}*/
		if(c==x || d==y) break;
	}
	if(c==x || d==y) cout << i+1 << endl;
	
	
	return 0;
}