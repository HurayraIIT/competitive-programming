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

	int n , i , m = 0 , cnt = 1;
	cin >> n ;
	int a[n] ;
	for(i=0;i<n;i++)
	{
		cin >> a[i]; 
		if(i>0 && a[i]>a[i-1])
		{
			cnt++;
		}
		else cnt = 1 ;
		if(m < cnt) m = cnt ;
	}
	
	cout << m << endl;
	
	return 0;

}




