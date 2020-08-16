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


LL find( LL n )
{
    if(n<1) return 1 ;
    return (2*find(n-1))%MOD ;
}
 
int main()
{
    fast_io
    
    LL n ;
    cin >> n ;
    LL sol = 1 ;
    for(LL i = 1 ; i <=n ; i++)
    {
        sol = (sol*i)%MOD ;
    }
    
    LL b = 1 ;
    for(LL i = 1 ; i < n ; i++ )
    {
        b = (b*2) % MOD ;
    }
    sol -= b ;
    sol = (sol+MOD)%MOD;

    cout << sol << endl;
    
    return 0;
}


 