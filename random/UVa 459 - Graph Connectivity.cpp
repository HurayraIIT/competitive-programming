/*  Name: Abu Hurayra
    Handle: HurayraIIT
    Institute: IIT_JU   */
    
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef string S;
typedef double D;
typedef vector<int> vi;

#define pi acos(-1.0)
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main()
{
    off;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t,i,j,n;
	cin >> t;
	cin >> ws ;
	while(t--)
	{
		S s,a="";
		cin >> s;
		int len = s[0]-'A';
		char par[len];
		for(i=0;i<len;i++)
		{
			par[i] = 'A' + i ;
		}
		
		while(a[0]!="\n")
		{
			cin >> a;
			par[a[0]-'A'] = par[a[1]-'A'];

		}

	}
	
	
	
	return 0;

}




