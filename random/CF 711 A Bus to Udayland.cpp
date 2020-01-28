/*  Name: Abu Hurayra
    Handle: HurayraIIT
    Institute: IIT_JU   */
    
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
    off;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,i;
	cin >> n ;
	string a[n];
	int tmp=0;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i][0]=='O' && a[i][1]=='O' && tmp==0)
		{
			tmp=1;
			a[i][0]='+';
			a[i][1]='+';
		}
		else if(a[i][3]=='O' && a[i][4]=='O' && tmp==0)
		{
			tmp=1;
			a[i][3]='+';
			a[i][4]='+';
		}
	}
	if(tmp==0) cout << "NO\n";
	else
	{
		cout << "YES\n";
		for(i=0;i<n;i++)
			cout << a[i] << endl;
	}
	
	
	
	return 0;

}




