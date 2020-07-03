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
    
    int t,n,i;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        int a[n] ;
        int sum = 0 , prod = 1 , zeroes = 0;
        for(i=0;i<n;i++)
        {
            cin >> a[i] ;
            sum += a[i] ;
            zeroes += (a[i]?0:1) ;

        }
        if(zeroes+sum==0) cout << zeroes+1 << endl;
        else cout << zeroes << endl;
        
    }
    
    
    return 0;
}


 