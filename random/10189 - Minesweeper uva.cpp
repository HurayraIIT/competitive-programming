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

int lst[150][150]={0};
void mark(int i, int j, int n, int m);
void ma(int i, int j, int n, int m)
{
    if(i<0 || i>n-1 || j<0 || j>m-1) return;
    if(lst[i][j]!=-1) lst[i][j]++;
    return;
}

void mark(int i, int j, int n, int m)
{
	if(i<0 || i>n-1 || j<0 || j>m-1) return;
	else if(lst[i][j]==-1)
	{
		ma(i+1,j+1,n,m);
		ma(i,j+1,n,m);
		ma(i+1,j,n,m);
		ma(i-1,j-1,n,m);
		ma(i-1,j,n,m);
		ma(i,j-1,n,m);
		ma(i-1,j+1,n,m);
		ma(i+1,j-1,n,m);
	}
	return;
}

void clr()
{
	for(int i=0;i<120;i++)
	{
		for(int j=0;j<120;j++) lst[i][j]=0;
	}
}

int main()
{
	
	int n,i,j,x,y,cnt=1,m;
	while(cin >> n >> m)
	{
		if(n==0 && m==0) return 0;
		S a[130];
		for(i=0;i<n;i++) cin >> a[i];
		
		clr();
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
			    if(a[i][j]=='*') lst[i][j]=-1;
			    else lst[i][j]=0;
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				mark(i,j,n,m);
			}
		}
		if(cnt!=1) printf("\n");
		printf("Field #%d:\n",cnt++);
		for(i=0;i<n;i++)
		{
		    for(j=0;j<m;j++)
		    {
		        if(lst[i][j]==-1) printf("*");
		        else printf("%d",lst[i][j]);
		    }
		    printf("\n");
		}
		
	}
	return 0;
}

