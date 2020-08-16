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
    
    LL n,i,j;
    string s ;
    cin >> n >> s ;
    int64 k = s.length();
    if(n<=k) {cout << n << endl;return 0;}
    LL ans = 1 ;
    if(n%k)
    {
        i=0;
        while(1)
        {
            ans *= (n-i*k);
            i++;
            if(n%k==n-i*k) {ans *= (n-i*k); break;}
        }
    }
    else
    {
        i=0;
        while(1)
        {
            ans *= (n-i*k);
            i++;
            if(k==n-i*k) {ans *= (n-i*k); break;}
        }
    }
    //cout << n << " " << k << endl;
    cout << ans << endl;

    
    
    return 0;
}


 