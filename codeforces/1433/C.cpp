
// Problem: C. Dominant Piranha
// Contest: Codeforces - Codeforces Round #677 (Div. 3)
// URL: https://codeforces.com/contest/1433/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;

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
#define rep(i,n) for(int  i  =  0  ; i  < n ; i ++)
 
 
int main()
{
    fast_io
    
	int t ;
	cin >>t ;
	while(t--)
	{
		int n ;
		cin >> n ;
		int a[n] , mx = -1 , cnt = 0;
		for (int i = 0 ; i < n ;i++)
		{
			cin >> a[i] ;
			mx = max(mx,a[i]) ;
		}
		rep(i,n) cnt += (mx==a[i]?1:0);
		if(cnt==n) { cout << -1 << endl; continue; }
		int sol = -1 ;
		rep(i,n)
		{
			if(sol!=-1) break;
			if(a[i]!=mx) continue;
			if(i==0)
			{
				if(a[i+1]<mx) {sol = i+1; break;}
			}
			else if(i==n-1)
			{
				if(a[i-1]<mx) {sol = i+1; break;}
			}
			else if(a[i+1]<mx)  {sol = i+1; break;}
			else if(a[i-1]<mx) {sol = i+1; break;}
		}
		cout << sol << endl;
	}
    
    
    return 0;
}


 