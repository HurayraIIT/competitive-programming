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
    
    int t ;
    cin >> t ;
    while(t--)
    {
        int64 n ;
        cin >> n ;
        int64 a[n] ;
        for(int i = 0 ; i<n;i++)
        {
            cin >> a[i] ;
        }
        int64 dp[n+2][3] = {0} ;
        for(int i = 0 ; i< n;i++)
        {
            dp[i+1][0] = max(dp[i+1][0],dp[i][0]+(i&1?0:a[i]));
            //cout << dp[i+1][0] << " ";
            dp[i+2][1] = max(dp[i+2][1],max(dp[i][0],dp[i][1])+(i&1?a[i]:a[i+1]));
            //cout << dp[i+2][1] << " ";
            dp[i+1][2] = max(dp[i+1][2],max({dp[i][0],dp[i][1],dp[i][2]})+(i&1?0:a[i]));
        }
        //cout << endl;
        cout << max({dp[n][0],dp[n][1],dp[n][2]}) << endl;
    }
    
    
    return 0;
}


 