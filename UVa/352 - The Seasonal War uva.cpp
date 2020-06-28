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

int lst[25][25]={0};

void mark(int i, int j, int n)
{
	if(i<0 || i>n-1 || j<0 || j>n-1) return;
	if(lst[i][j]==1)
	{
		lst[i][j]=2;
		mark(i+1,j+1,n);
		mark(i,j+1,n);
		mark(i+1,j,n);
		mark(i-1,j-1,n);
		mark(i-1,j,n);
		mark(i,j-1,n);
		mark(i-1,j+1,n);
		mark(i+1,j-1,n);
	}
	return;
}

void clr()
{
	for(int i=0;i<25;i++)
	{
		for(int j=0;j<25;j++) lst[i][j]=0;
	}
}

int main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n,i,j,x,y,cnt=1;
	while(cin >> n)
	{
		if(n==0) return 0;
		char a[30][30];
		for(i=0;i<n;i++) scanf("%s",a[i]);
		
		int eg=0;
		clr();
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				lst[i][j]=a[i][j]-'0';
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(lst[i][j]==1)
				{
					eg++;
					mark(i,j,n);
				}
			}
		}
		printf("Image number %d contains %d war eagles.\n",cnt++,eg);
	}
	return 0;
}

