   
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef string S;
typedef double D;
typedef vector<int> vi;

#define pi acos(-1.0)
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main()
{
    //off;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int b,n,i,j;
	while(cin>>b>>n)
	{
		if(b==0 && n==0) return 0;
		int m[b+1] = {0} ;
		for(i=1;i<=b;i++) cin >> m[i];
		int x,y,s;
		for(i=1;i<=n;i++)
		{
			cin >> x >> y >>s ;
			m[x]-= s;
			m[y]+=s;
		}
		int tmp=0;
		for(i=1;i<=b;i++)
		{
			if(m[i]<0)
			{
				tmp=1;
			}
		}
		if(tmp==0) cout<<"S\n";
		else cout << "N\n";
	}
	
	
	
	return 0;

}




