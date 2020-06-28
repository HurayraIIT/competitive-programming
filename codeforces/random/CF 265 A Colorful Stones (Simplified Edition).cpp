	
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
	
	int i,j,k;
	S a, b;
	cin >> a ;
	cin >> b;
	for(i=0,j=0;i<b.length() && j<a.length();)
	{
		if(b[i]==a[j])
		{
			i++;
			j++;
		}
		else i++;
	}
	
	printf("%d\n",j+1);

	return 0;
}