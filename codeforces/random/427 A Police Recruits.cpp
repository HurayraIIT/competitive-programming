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
/*
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	*/
	int n,i,s=0,p=0,c=0;
	cin >> n;
	int a[i];
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]==-1) c++;
		else p+=a[i];
		if(c>p)
		{
			s+=c-p;
			c=c-p;
			p=0;
		}
		else
		{
			p=p-c;
			c=0;
		}
	}
	cout << n ;
	
	return 0;
}