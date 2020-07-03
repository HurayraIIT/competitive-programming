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
 
 bool is_distinct ( int n )
 {
     int a[10] = {0} , i ;
     while(n)
     {
         int d = n % 10;
         a[d]++;
         n /= 10 ;
     }
     
     for(i=0;i<10;i++)
     {
         if(a[i]>1) return false;
     }
     return true;
     
 }
 
int main()
{
    fast_io
    
    int l , r , i ;
    cin >> l >> r ;
    for(i=l;i<=r;i++)
    {
        if(is_distinct(i))
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    
    
    return 0;
}


 