
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
	//off;
    #ifndef ONLINE_JUDGE
    Fin; Fout;
    #endif

    int a,b,c;
    cin >> a >> b >> c;

    LL ans = c*2 ;
    if(a==b) ans += a*2 ;
    else if(abs(a-b)==1) ans += a+ b;
    else if(a<b) ans+=a+a+1;
    else ans += b + b + 1 ;

    cout << ans  << endl;









	return 0;

}





