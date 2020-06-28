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
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n,i,j,ts;
	scanf("%d",&ts);
	cin >> ws;
	while(ts--)
	{
		S a,b;
		getline(cin,a);
		getline(cin,b);
		int la=a.length();
		int lb=b.length();
		int t[105][105];

	for(i=0;i<=la+1;i++) t[0][i]=i;
	for(i=0;i<=lb+1;i++) t[i][0]=i;

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
	printf("%d\n",t[lb][la]);
		

	}
	
	
	
	return 0;
}