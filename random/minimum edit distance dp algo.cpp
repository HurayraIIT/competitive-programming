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

int min(int a,int b,int c)
{
	int m=10000;
	if(m>a) m=a;
	if(m>b) m=b;
	if(m>c) m=c;
	return m;
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int i,j,k;
	S a,b;
	getline(cin,a);
	getline(cin,b);
	int la=a.length();
	int lb=b.length();
	int t[lb+5][la+5];
	for(i=0;i<=la;i++) t[0][i]=i;
	for(i=0;i<=lb;i++) t[i][0]=i;
	for(i=0;i<lb;i++)
	{
		for(j=0;j<la;j++)
		{
			if(a[j]==b[i])
			{
				t[i+1][j+1]=t[i][j];
			}
			else
			{
				t[i+1][j+1]=min(t[i][j],t[i+1][j],t[i][j+1])+1;
			}
		}
	}	
	cout << t[lb][la] << endl;
	
	return 0;
}
/*
6
impossible
possible

possible
sorry
scared
excused

counted
proud
two people
to
*/