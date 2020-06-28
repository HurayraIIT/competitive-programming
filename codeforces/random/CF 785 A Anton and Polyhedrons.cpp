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

	int n;
	cin >> n;
	S a;
	LL ans=0;
	for(int i=0;i<n;i++)
	{
		cin >> a;
		if(a=="Tetrahedron") ans+=4;
		if(a=="Cube") ans+=6;
		if(a=="Octahedron") ans+=8;
		if(a=="Dodecahedron") ans+=12;
		if(a=="Icosahedron") ans+=20;
	}
	cout << ans << endl;
	
	
	return 0;

}




