/**** Bismillahir Rahmanir Rahim
	* Abu Hurayra (HurayraIIT) - hurayraiit@gmail.com
	* Jahangirnagar University - 04.01.2021 12:54:38 +06
*****/

#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pair<int, int> > vpii;

#define READ freopen("input.txt", "r", stdin);
#define WRITE freopen("output.txt", "w", stdout);
#define fast_io ios_base::sync_with_stdio(0);  cin.tie(0);
#define sz(a) int((a).size())
#define space " "
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define pi acos(-1.0)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define MOD 1000000007
#define PRECISION(x) cout << fixed << setprecision(x);
#define rep(i,n) for(int i = 0 ; i < n ; i++)
#define rep2(i,a,b) for(int i = a ; i <= b ; i++)
 
 
int main()
{
    fast_io
    int t, x;
    cin >> t ;
    while(t--) {
		cin >> x ;
		int ans = ((x%10)-1) * 10 ;
		if (x<10) ans++;
		else if(x<100) ans += 3 ;
		else if(x<1000) ans += 6;
		else ans += 10 ;
		cout << ans <<endl;
	}
	
	
    
    return 0;
}


 

