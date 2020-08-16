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
 
vector<long long int > primes;
bool num[1000050];

void generate( )
{
    LL i,j,k,n=1000000ll;
    memset(num,true,sizeof(num));

    num[0]=num[1]=false;
    //primes.push_back(2);
    
    for(i=2;i<=n;i++)
    {
        if(num[i])
        {
            primes.push_back(i);
            for(j=i*i;j<=n;j+=i)
            {
                num[j]=false;
            }
        }
    }
    //cout << primes.size() << endl;
}
 
int main()
{
    fast_io
    generate();
    int t,k,n,i,j;
   
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        cout << primes[n-1] << endl;
    }

    
    
    return 0;
}


 