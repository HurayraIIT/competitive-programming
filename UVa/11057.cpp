
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

    int n,i,j,k;
    vi v;
    while(scanf("%d",&n)==1)
    {
    	v.push_back(n);
    	int len = v.size() ;
    	sort(v.begin(),v.end());
    	if(len==1) cout << v[0] << endl;
    	else if(len%2!=0) cout << v[len/2] << endl;
    	else
    	{
    		cout << (v[(len-2)/2]+v[len/2])/2 << endl;
    	}
    }









	return 0;

}





