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

int sub(int n , int k)
{
	if(k==0) return n ;
	if(n%10)
	{
		n-=1;
		k--;
	}
	else
	{
		n/=10;
		k--;
	}
	return sub(n,k);
}

int main()
{
    off;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,k;
	cin >> n >> k;
	cout << sub(n,k) << endl;
	
	
	
	return 0;

}




