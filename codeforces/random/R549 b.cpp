	
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
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n,i,j,l;
	
	S s;
	LL num;
	cin >> num;
	s = to_string(num);
	l = s.length();
	LL pro = 1;

	if(num>999)
	{
		s[0]--;
		for(i=1;i<l;i++)
		{
			s[i]='9';
		}
		for(i=0;i<l;i++)
		{
			if(s[i]>'1') pro*=s[i]-'0';
		}
	}
	else
	{
		LL pr = 1;
		while(num)
		{
			int d = num;
			pr=1;
			while(d)
			{
				pr*=d%10;
				d/=10;
			}
			if(pro<pr) pro = pr;
			num--;
		}
	}
	
	cout << pro << endl;
	
	return 0;
}