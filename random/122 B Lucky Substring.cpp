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

	int n,i,j,x=0,y=0;
	S a;
	cin >> a;
	int l=a.length();
	for(i=0;i<l;i++)
	{
	    if(a[i]=='4') x++;
	    else if(a[i]=='7') y++;
	}
	if(x==0 && y==0) cout << -1 << "\n";
	else if(x==y) cout << 4 << "\n";
	else if(x>y) cout << 4 << "\n";
	else cout << 7 << "\n";




	return 0;
}
