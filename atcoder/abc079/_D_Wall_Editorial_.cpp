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
#define rep(i,a,n) for(int ( i ) = ( a ) ;( i ) <( n );( i )++)
 
 
int main()
{
    fast_io
    
    int h,w;
    cin >> h >> w ;

    int c[11][11] ;
    rep(i,0,10) rep(j,0,10) cin >> c[i][j];

    int a[h+1][w+1] ;
    rep(i,1,h+1) rep(j,1,w+1) cin >> a[i][j] ;

    rep(k,0,10) rep(i,0,10) rep(j,0,10) c[i][j] = min(c[i][j],c[i][k]+c[k][j]);

    /*
    rep(i,0,10)
    {
        rep(j,0,10) cout << c[i][j] << " ";
        cout << endl;
    }
    */

    int sum = 0 ;
    rep(i,1,h+1) rep(j,1,w+1) sum += (a[i][j]>=0?c[a[i][j]][1]:0);

    cout << sum << endl;


    return 0;
}


 