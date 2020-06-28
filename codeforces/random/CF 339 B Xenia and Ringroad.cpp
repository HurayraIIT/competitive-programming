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
	
	
	LL n,m;
	cin >> n>> m;
	LL a[m];
	LL i,j,k,pos=1,s=0;
	for(i=0;i<m;i++)
	{
		cin >> a[i];
		if(a[i]>pos)
		{
			s+=a[i]-pos;
			pos=a[i];
		}
		else if(a[i]==pos) continue;
		else
		{
			s+=n-pos+a[i];
			pos=a[i];
		}
	}
	cout << s << "\n";
	
	return 0;
}
