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
    int t , n , k , i , j ;
    cin >> t ;
    while(t--)
    {
        cin >> n >> k ;
        string s ;
        cin >> s ;
        
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                for(j=i+1;j<=i+k && j<n ;j++) s[j] = '2' ;
                i = i+k-1;
            }
        }
        //cout << s << endl;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                for(j=i-1;j>=i-k && j>=0 ;j--) s[j] = '2' ;
                i = i-k;
            }
        }
        for(i=0;i<n;i++) if(s[i]=='2') s[i] = '1' ;

        int ans = 0 ;
        int cnt = 0 ;
        //cout << s << endl;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
            else
            {
                ans += ((cnt+k)/(k+1)) ;
                cnt = 0; 
            }
            //cout << cnt << space;
        }
        if(cnt) ans += ((cnt+k)/(k+1)) ;
        cout << ans << endl;
    }   
    
    
    return 0;
}


 