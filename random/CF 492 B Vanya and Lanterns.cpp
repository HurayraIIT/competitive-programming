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
    //off;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,l,i;
	cin >> n >> l;
	int a[n] ;
	for(i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	int dis = 2 * max(a[0],l-a[n-1]);
	for(i=0;i<n-1;i++)
	{
		dis = max ( dis ,  a[i+1] - a[i]) ;
	}
	printf("%.10f\n",dis/2.0);
	
	
	
	return 0;

}


