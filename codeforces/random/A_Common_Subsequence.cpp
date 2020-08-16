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
    
    int t,n,m,k,i,j;
    cin >> t ;
    while(t--)
    {
        cin >> n >> m ;
        int a[n],b[m];
        for(i=0;i<n;i++) cin >> a[i] ;
        for(i=0;i<m;i++) cin >> b[i] ;
        sort(a,a+n);
        sort(b,b+m);
        i=0;j=0;
        int flg = 0 , ans = -1;
        while(i<n && j<m)
        {
            if(a[i]==b[j])
            {
                flg = 1 ; ans = a[i] ; break;
            }
            else if(a[i]<b[j]) i++;
            else j++;
        }
        if(!flg) cout<< "NO\n";
        else cout << "YES\n" << 1 << " " << ans << endl;
    }

    
    
    return 0;
}


 