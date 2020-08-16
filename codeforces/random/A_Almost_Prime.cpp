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


bool is_prime(int n )
{
    if(n<=1) return false;
    for(int i = 2 ; i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

bool has2 ( int n , int a , int b )
{
    while(n%a==0 || n%b==0)
    {
        if(n%a==0) n /= a ;
        if(n%b==0) n /= b ;
    }
    if(n==1) return true;
    return false;
}
 
int main()
{
    fast_io
    
    int n,i,j,s=0;
    cin >> n ;
    for(i=1;i<=n;i++)
    {
        int cnt = 0 , a , b ;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0 && j!=i/j && is_prime(i/j) && is_prime(j))
            {
                cnt++;a = j ; b = i/j;
            }
        }
        if(cnt==1 && has2(i,a,b)) {s++;cout << i << endl;}
    }
    cout <<s << endl;

    
    
    return 0;
}


 