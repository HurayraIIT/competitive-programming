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

vi v;

void prm(LL b)
{
	LL i,j,k;
	LL limit=sqrt(b+1)+1;
	bool mark[b+5]={0};
	for(i=4;i<=b;i+=2) mark[i]=1;
	mark[0]=1;mark[1]=1;
	for(i=3;i<=limit;i+=2)
	{
		if(mark[i]==0)
		{
			for(j=i*i;j<=b;j+=i) mark[j]=1;
		}
	}
	for(i=0;i<=b;i++)
	{
		if(mark[i]==0) v.PSB(i);
	}
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	LL t,n,i,j;
	cin >> t;
	while(t--)
	{
		cin >> n;
		LL b=sqrt(n+1)+1;
		v.clear();
		prm(b);
		LL l=v.size();
		cout << "The prime factors are:\n";
		for(i=0;i<l;i++)
		{
			int cnt=0;
			while(n%v[i]==0)
			{
				n/=v[i];
				cnt++;
				if(n==1) break;
			}
			if(cnt!=0) cout << v[i] << " " << cnt << "\n";
		}
		if(n!=1) cout << n << " 1\n\n";
	}
	
	
	
	return 0;
}