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
	
	int i,j;
	LL l,r,q,s=0;
	cin >> j;
	while(j--)
	{
		cin >> l >> r >> q;
		s=q;
		i=0;
		if(q<l) cout << q << endl;
		else
		{
			LL a=(int) r/q;
			s=q*(a+1);
			cout << s << endl;
		}
	}
	
	
	
	return 0;
}