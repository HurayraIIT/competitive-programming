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


int main()
{

	
	int n,i,j,b,c;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin >> a[i];
	}
	sort(a,a+n);
	//if(!(n & 1)) n--;
	D area=0;
	if(!(n & 1))
	{
	    
	for(i=n-1;i>=0;i--)
	{
	    if(!(i & 1)) area-=a[i]*a[i]*pi;
	    else area+=a[i]*a[i]*pi;
	}
	cout << area << "\n";
	}
	else
	{
	for(i=n-1;i>=0;i--)
	{
	    if(!(i & 1)) area+=a[i]*a[i]*pi;
	    else area-=a[i]*a[i]*pi;
	}
	cout << area << "\n";
	}
	
	return 0;
}





