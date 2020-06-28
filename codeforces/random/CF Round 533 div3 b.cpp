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
	
	int n,k,i,j;
	scanf("%d %d",&n,&k);
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i]%k;
		//cout << a[i] << " " << b[i] << endl;
	}
	sort(b,b+n);
	int cnt=0;
	int tmp=0;

	//for(i=0;i<n;i++) cout << b[i] << " ";
	//cout << endl;
	for(i=0,j=n-1;i<=j;)
	{
		if(b[i]==0)
		{
			tmp++;
			i++;
			continue;
		}

		if(b[i]+b[j]==k && i!=j)
		{
			cnt++;
			i++;j--;
		}
		else if(b[i]+b[j]>k && i!=j) j--;
		else i++;
	}
	//cout << cnt <<endl<<tmp<< endl;
	printf("%d\n",cnt*2+(tmp/2)*2);
	

	
	
	
	return 0;
}