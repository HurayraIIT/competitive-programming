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

int val(int r , int c)
{
	if(r==1 || c==1) return 1 ;
	else return val(r-1,c)+val(r,c-1);
}

int main()
{
    off;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n ;
	cin >> n ;
	cout << val(n,n) << endl;
	
	
	
	return 0;

}




