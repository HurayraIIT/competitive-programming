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
	
	int n,t,i;
	cin >> n >> t;
	if(n==1 && t==10) cout << -1;
	else if(t!=10)
	{
		for(i=0;i<n;i++) cout << t;
	}
	else
	{
		for(i=0;i<n-1;i++) cout << 1;
			cout << 0;
	}
	
	
	return 0;
}