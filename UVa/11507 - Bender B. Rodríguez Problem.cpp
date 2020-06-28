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
    //off;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int l,i,j;
	while(cin>>l)
	{
		if(l==0) return 0;
		string s;
		int d = 1;
		for(i=l-1;i>=1;i--)
		{
			cin >> s;
			if(s[0]=='N') continue;
			if(s[0]=='+')
			{
				if(s[1]=='y')
				{
					if(d==1) d=2;
					else if(d==2) d=-1;
					else if(d==-1) d=-2;
					else if(d==-2) d=1;
				}
				else if(s[1]=='z')
				{
					if(d==1) d=3;
					else if(d==3) d=-1;
					else if(d==-1) d=-3;
					else if(d==-3) d=1;
				}
			}
			else if(s[0]=='-')
			{
				if(s[1]=='y')
				{
					if(d==1) d=-2;
					else if(d==-2) d=-1;
					else if(d==-1) d=2;
					else if(d==2) d=1;
				}
				else if(s[1]=='z')
				{
					if(d==1) d=-3;
					else if(d==-3) d=-1;
					else if(d==-1) d=3;
					else if(d==3) d=1;
				}
			}
		}
		if(d==1) cout <<"+x\n";
		else if(d==-1) cout <<"-x\n";
		else if(d==2) cout <<"+y\n";
		else if(d==-2) cout <<"-y\n";
		else if(d==3) cout <<"+z\n";
		else if(d==-3) cout <<"-z\n";
	}
	
	
	
	return 0;

}




