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

typedef long long ll;
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
    
    ll t , n , k , i , j ;
    cin >> t ;
    while(t--)
    {
        cin >> n >> k ;
        ll a[n] ;
        for(i=0;i<n;i++)
        {
            cin >> a[i] ;
            a[i] %= k ;
        }
        sort(a,a+n,greater<ll>());
        ll cnt = 0;
        ll x = 0 ; bool flg = true ;
        for(i=0;i<n;i++)
        {
            //cout << i << space << x << endl;
            flg = true;
            if(a[i]==0) continue;
            if(x==0 || x%k==0) {x++;cnt++;}
            ll b = x+a[i] ;
            
            if(b%k==0) {x++;cnt++;continue;}

            
            for(j=i+1;j<n;j++)
            {
                if(a[j]==0) continue;
                if((x+a[j])%k==0)
                {
                    a[j] = 0 ; flg = false;
                    x++;cnt++;break;
                }
            } 
            cout << i << space << x << endl;
            //if(!flg) continue;
            b = x+a[i] ;
            ll c = (b+k)/k;
            c = c * k ;
            cnt += c - b + 1 ;
            x += c - b + 1 ;
            
        }
        cout << cnt  << endl;
    }
    
    return 0;
}


 