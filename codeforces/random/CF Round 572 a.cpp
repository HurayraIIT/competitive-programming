
/*  Name: Abu Hurayra
    Handle: HurayraIIT
    Institute: IIT_JU   */

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef string S;
typedef double D;
typedef vector<int> vi;
typedef queue<int> qi;
typedef stack<int> si;

#define pi acos(-1.0)
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Fin freopen("input.txt","r",stdin)
#define Fout freopen("output.txt","w",stdout)

int main()
{
	off;
    #ifndef ONLINE_JUDGE
    Fin; Fout;
    #endif

    LL n,i,j;
    cin >> n;
    LL a[n];
    for(i=0;i<n;i++) cin >> a[i] ;

    sort(a,a+n);
	reverse(a,a+n);

	int t = a[n-1];
	a[n-1] = a[2];
	a[2] = t;

	int cnt=0;

	for(i=0;i<n;i++)
	{
		//cout << a[i] << endl;
		if(i==0)
		{
			if(a[i]>=a[i+1] + a[n-1])
			{
				cnt=1;
				break;
			}
		}
		else if(i==n-1 && a[i]>=a[n-1]+a[0])
		{
			cnt=1; break;
		}
		else if(a[i]>=a[i-1]+a[i+1])
		{
			cnt=1; break;
		}
	}
	
	if(cnt==1) cout << "NO\n";
	else
	{
		cout << "YES\n";
		for(i=0;i<n;i++) cout << a[i] << " ";
		
	}

	return 0;

}





