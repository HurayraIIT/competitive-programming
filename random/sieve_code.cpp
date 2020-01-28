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

bool mark[100010];

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
	//Calculate prime numbers from 1 to N
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int n,i,j,k;
	cin >> n;
	int limit=sqrt(n+1)+1;
	mark[0]=1;mark[1]=1;
	for(i=4;i<=n;i+=2) mark[i]=1;

	for(i=3;i<=limit;i+=2)
	{
		if(mark[i]==0)
		{
			for(j=i*i;j<=n;j+=i) mark[j]=1;
		}
	}
	cout << "The Prime Numbers Are: \n";
	for(i=0;i<=n;i++)
	{
		if(mark[i]==0)
		{
			cout << i << "\n";
		}
	}
	
	return 0;
}