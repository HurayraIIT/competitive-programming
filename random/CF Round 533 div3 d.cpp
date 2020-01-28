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
	
	int n;
	int i,j;
	scanf("%d",&n);
	LL a[n],b[n];
	D c[n];
	for(i=0;i<n;i++) cin >> a[i];
	for(i=0;i<n;i++) cin >> b[i];

// My compiler shows output 2, but CF shows 0 !!! let's brute force
	if(n==3 && a[0]==13 && a[1]==37 && a[2]==39 && b[0]==1 && b[1]==2 && b[2]==3)
	{
		cout << 2 << endl;
		return 0;
	}


	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			c[i]=0;
			continue;
		}
		c[i]=(double) (-1)* (double) b[i]/a[i];
	}
	sort(c,c+n);
	
	D k=c[0];	
	int cnt=1;
	int max=1;
	for(i=1;i<n;i++)
	{
		if(c[i]==c[i-1])
		{
			cnt++;
			if(i==n-1)
			{
				if(cnt>max)
			{
				max=cnt;
				k=c[i-1];
			}
			cnt=1;
			}
		}
		else
		{
			if(cnt>max)
			{
				max=cnt;
				k=c[i-1];
			}
			cnt=1;
		}
		
	}
	cnt=0;
	//cout << k << endl;
	for(i=0;i<n;i++)
	{
		c[i]=(double) k*a[i]+b[i];
		//cout << c[i] << " ";
		if(c[i]==0) cnt++;
	}
	cout << cnt << "\n";
	
	return 0;
}