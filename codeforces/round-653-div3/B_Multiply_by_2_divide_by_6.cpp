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

typedef long long ll;
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
 
 ll divx ( ll n , ll x )
 {
     ll cnt = 0 ;
     while(n!=0)
     {
         if(n%x!=0) break;
         n /= x ;
         cnt++;
     }
    return cnt;
 }
 
int main()
{
    fast_io
    
    int64 t,n,i,m;
    cin >> t ;
    while(t--)
    {
        cin >> m ;
        n = m ;
        if(n==1) {cout << 0 << endl;continue;}
        if(n%3!=0) {cout << -1 << endl;continue;}
        
        int64 twes = 0 , threes = 0 ;
        threes = divx(m,3) ;
        if(m%2==0) twes = divx(m,2) ;

        ll num = 1 ;
        for(i=1;i<=twes;i++) num *= 2 ;
        for(i=1;i<=threes;i++) num *= 3 ;
        if(num!=n) {cout << -1 << endl;continue;}

        if(twes>threes) {cout << -1 << endl;continue;}
        else
        {
            cout << threes+(threes-twes) << endl;
        }
        //cout << threes << space << twes << endl;
        
    }
    
    return 0;
}


 