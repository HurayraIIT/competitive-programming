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
    int t , n , k , i ;
    cin >> t ;
    while(t--)
    {
        cin >> n >> k ;
        string s ;
        cin >> s ;
        int a[n] , b[n] = {0} ;
        b[0] = s[0] -'0' ;
        for(i=0;i<n;i++)
        {
            a[i] = s[i] - '0' ;
            if(i) b[i] = a[i] + b[i-1] ;
            //cout << b[i] << space ;
        }
        //cout << endl;
        int dp[n+1] = {0} ;
        bool flg = true ;
        int mx = -1 ;
        for(i=0;i<n;i++)
        {
            flg = true;
            if(a[i]) {
                dp[i]=max(mx,(i>=k?dp[i-k]:0));
                if(mx<dp[i]) mx = dp[i] ;
                continue;
            }
            
            if(i<k && b[i]==b[0] && a[0]) flg = false;
            if(i>k && b[i]>b[i-k-1])
            {
                flg = false;
            }
            if(i==k && b[i]==b[i-k] && b[i]!=0)
            {
                dp[i]=max(mx, dp[i-k]);
                if(mx<dp[i]) mx = dp[i] ;
                continue;
            }
            if(i<=n-1-k && b[i]<b[i+k]) flg = false ;

            if(i>=n-k && b[i]<=b[n-1] && (a[n-1]) && b[i]!=b[i-k]) flg = false;
            cout <<i << space << flg << " test\n";
            dp[i] =max(mx, ((flg && !a[i]) ?1:0) + (i>k?dp[i-k-1]:0));
            if(mx<dp[i]) mx = dp[i] ;
        }
        for(i=0;i<n;i++) cout << dp[i] <<space ;
        cout << endl;
        cout << dp[n-1] << endl;
    }   
    
    
    return 0;
}


 