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
        int a,b;
        cin >> a >> b ;
        if(a==b) cout << 0 << endl;
        else if(a<b)
        {
            if(a%2==b%2) cout << 2 << endl;
            else cout << 1 << endl;
        }
        else if(a>b)
        {
            if(a%2==b%2) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }
    
    return 0;
}


 