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
typedef vector<pair<int,int> > vpi; 

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
    cin >> n ;
    int a[n] , b[101] = {0};
    vpi v ;

    for(i=0;i<n;i++)
    {
        cin >> a[i] ;
        b[a[i]] = i+1 ;
        v.push_back(MP(a[i],i+1));
    }
    sort(a,a+n);
    sort(v.begin(),v.end());
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        cout << v[i].second << " " << v[j].second << endl;
    }

    
    
    return 0;
}


 