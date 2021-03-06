// Abu Hurayra (HurayraIIT)
// IIT, Jahangirnagar University

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <bitset>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;

typedef long long LL;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef vector<int> vi; 

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
 
 
int main()
{
    fast_io
    
	int t;
	cin >> t ;
	while(t--)
	{
		string s ;
		cin >> s ;
		LL ans = 0 ;
		LL flg = -1 ;
		LL n = s.size();
		LL a[n];
		for(int i = 0 ; i < n ; i++ )
		{
			if(!i) a[i] = (s[i]=='-') ? -1 : 1 ;
			else a[i] = a[i-1] + ( (s[i]=='-') ? -1 : 1 ) ;
		}
		for(int i = 0 ; i < n ; i++ )
		{
			if(a[i]==flg)
			{
				ans += i+1 ; flg--;
			}
		}
		ans += n ;
		cout << ans << endl;
	}
	
	
	return 0;
}


 