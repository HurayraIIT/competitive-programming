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
    
    int r,c,i,j,ans=0;
    cin >> r >> c ;
    int a[r] = {0};
    int b[c] = {0};
    int x=0,y=0;
    for(i=0;i<r;i++)
    {
        string s ;
        cin >> s ;
        for(j=0;j<c;j++)
        {
            if(s[j]=='S') {a[i]=1;b[j]=1;}
        }
    }
    x=0;y=0;
    for(i=0;i<r;i++) {x += a[i];}
    for(i=0;i<c;i++) {y += b[i];}
    x = r-x; y = c-y ;
    cout << x*c+y*r-x*y << endl;

    
    
    return 0;
}


 