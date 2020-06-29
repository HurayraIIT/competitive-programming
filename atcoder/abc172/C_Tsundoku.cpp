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
    
    LL n , m , k , i;
    cin >> n >> m >> k ;
    LL a[n] , b[m] , pre_a[n] , pre_b[m];
    for(i=0;i<n;i++)
    {
        cin >> a[i] ;
        if(!i) pre_a[i] = a[i];
        else pre_a[i] = a[i] + pre_a[i-1];
    }
    for(i=0;i<m;i++)
    {
        cin >> b[i] ;
        if(!i) pre_b[i] = b[i];
        else pre_b[i] = b[i] + pre_b[i-1];
    }
    if(k<pre_b[0] && k<pre_a[0])
    {
        cout << 0 << endl;return 0;
    }
    LL mx = -1 , cnt = 0 , rem = k ;
    LL up = upper_bound(pre_a,pre_a+n,k+1)-pre_a;
    mx = max(mx,up);
    for(i=0;i<m;i++)
    {
        if(pre_b[i]>k) break;
        cnt = i+1 ;
        rem = k - pre_b[i] ;
        if(!rem) {mx=max(mx,cnt);break;}
        int upper = upper_bound(pre_a,pre_a+n,rem+1)-pre_a;
        cnt += upper;
        mx = max(mx,cnt);
    }
    mx = max(mx,cnt);
    cout << mx << endl;
    
    return 0;
}


 