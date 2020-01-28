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
	
	int n,i,j,k;
	cin >> n;
	if(n==1) cout << 2 << endl;
	else if(n==2) cout << 3 << endl;
	else if(n==3) cout << 4 << endl;
	else if(n==4) cout << 4 << endl;
	else
	{
		int d=sqrt(n);
		if(d*d>=n)
		{
			cout << d*2 << endl;
			return 0;
		}
		else if(d*d<n)
		{
			if(n>d*d && n<=d*d+d) cout << (d*2)+1 << endl;
			else cout << (d+1)*2 << endl;
		}
	}
	
	
	
	return 0;
}