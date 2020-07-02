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
    
    LL t , n , i , j ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        if(n==2 || (n/2)&1) cout << "NO\n" ;
        else
        {
            cout << "YES\n";
            vi v ;
            for(i=2,j=1;j<=n/2;i+=2,j++)
            {
                cout << i << " ";
                v.push_back((j&1)?i-1:i+1);
                if(j%2==0) i+=2 ;
            }
            for(i=0;i<sz(v);i++)
            {
                cout << v[i] << " " ;
            }
            cout << endl;
        }
        
    }
    
    return 0;
}


 // 2 4 6 8
 // 1 5 5 9