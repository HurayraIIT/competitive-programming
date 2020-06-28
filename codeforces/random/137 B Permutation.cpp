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
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
	
	int n,i,j;
	cin >> n;
	int a[5010]={0};
	for(i=0;i<n;i++)
	{
	    cin >> j;
	    a[j]=1;
	}
	j=0;
	for(i=1;i<=n;i++) if(!a[i]) j++;
	cout << j << "\n";
	
	return 0;
}