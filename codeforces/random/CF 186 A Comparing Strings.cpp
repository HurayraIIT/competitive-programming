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

	int i;
	S a,b;
	cin >> a;
	cin >> b;
	int la = a.length();
	int lb = b.length();
	if(la!=lb)
	{
		cout << "NO\n";
		return 0;
	}
	int cnt = 0;
	char a1,a2,b1,b2;
	for(i=0;i<la;i++)
	{
		if(a[i]!=b[i])
		{
			cnt++;
			if(cnt==1)
			{
				a1 = a[i];
				b1 = b[i];
			}
			else
			{
				a2 = a[i];
				b2 = b[i];
			}
			
		}
	}
	if(cnt!=2 && cnt!=0)
	{
		cout << "NO\n";
	}
	else if(cnt==2 && (a1!=b2 || a2!=b1) ) cout << "NO\n";
	else cout << "YES\n";
	
	
	
	return 0;

}




