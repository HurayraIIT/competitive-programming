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
	
	int n,i,j,k;
	scanf("%d",&n);
	int a[n];
	int b[n]={0};
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	sort(a,a+n);
	
	int lst=1;
	int max=0;
	int cnt=0;

for(i=0,j=0;i<n,j<n;)
{
	if(a[j]-a[i]<=5)
	{
		cnt++;
		j++;
	}
	else
	{
		i++;
		if(max<cnt) max=cnt;
		//cout << cnt << " ";
		cnt--;
		//j++;
	}
}
if(max<cnt) max=cnt;
	//cout << endl;
	printf("%d\n",max);
	
	
	return 0;
}


