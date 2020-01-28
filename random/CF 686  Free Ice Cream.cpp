	
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
	
	int i,j,k,n,x;
	LL s = 0 ;
	int d = 0;
	scanf("%d %d",&n,&x);
	int a[n];
	s+=x;
	for(i=0;i<n;i++)
	{
		char ch;
		cin >> ch >> a[i];
		if(ch=='+') s+=a[i];
		else
		{
			if(s>=a[i])
			{
				s-=a[i];

			}
			else d++;
			
		}
		//cout <<ch << " " << s << endl;
	}
	
	printf("%lld %d\n",s,d);

	return 0;
}