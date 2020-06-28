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
	
	int w,h,i,j,n,s=0;
	cin >> w >> h;
	s+=w;
	int u1,d1,u2,d2;
	cin >> u1 >> d1 >> u2 >> d2;
	for(i=h;i>=0;i--)
	{
		s=s+i;
		if(i==d1 && i)
		{
			s-=u1;
			if(s<0) s=0;
		}
		else if(i==d2 && i)
		{
			s-=u2;
			if(s<0) s=0;
		}
		//cout << s << endl;
	}
	cout << s << endl;
	
	
	return 0;
}