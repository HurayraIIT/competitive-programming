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
	
	double y,rec;
	int i,j;
	D dp,loan;
	while(cin >> y >> dp >> loan >> rec)
	{
		if(y<0) return 0;
		D record[rec][2];
		for(i=0;i<rec;i++)
		{
			cin >> record[i][0] >> record[i][1];
		}
		D value=loan, owe=loan;
		value-=value*record[0][1];
		for(i=0;i<y;i++)
		{

		}
	}
	
	
	return 0;
}