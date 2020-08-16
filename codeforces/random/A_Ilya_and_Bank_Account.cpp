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
    string s ;
    cin >> s ;
    if(s[0]!='-')
    {
        cout << s << endl;
        return 0;
    }
    int l = s.size() ;
    int flg = 0 ;
    if(s[l-2]>=s[l-1])
    {
        flg=l-2;
    }
    else flg = l-1 ;
    if(l==3 && s[2]=='0' )
    {
        cout << 0 << endl;return 0;
    }

    for(int i=0;i<l;i++)
    {
        if(i==flg) continue;
        cout << s[i];

    }
    cout << endl;
    
    
    return 0;
}


 