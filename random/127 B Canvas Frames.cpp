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

	
	int n,i,j,k=0,s=0;
	cin >> n;
	int a[n],b[105]={0};
	for(i=0;i<n;i++)
	{
	    cin >> a[i];
	    b[a[i]]++;
	}
	for(i=1;i<=100;i++)
	{
	    
	    if(b[i]>=2)
	    {
	        k+=b[i]/2;
	        b[i]%=2;
	    }
	}
	s+=k/2;
	cout << s << "\n";
	
	
	return 0;
}


