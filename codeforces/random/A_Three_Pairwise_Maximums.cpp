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
    
    int t,x,y,z,i;
    cin >> t ;
    while(t--)
    {
        cin >> x >> y >> z ;
        int a[3] = {x,y,z};
        sort(a,a+3);
        if ( (a[0]!=a[1] && a[1]!=a[2]) || (a[0]==a[1] && a[1]<a[2]) )
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << a[0] << " " << a[0] << " " << a[1] << endl;
        }
        
        

    }
    
    
    return 0;
}


 