/*
* Bismillahir Rahmanir Rahim
* AUTHOR : Abu Hurayra ,HANDLE: HurayraIIT
*/
 
#include <bits/stdc++.h>
using namespace std;


#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(n) for (int i=0 ; i<n ; i++)
#define FOR2(n) for (int j=0 ; j<n ; j++)
#define print(n) cout << n << endl
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007
const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef long long int LL;
typedef unsigned long long int  ULL;




int main()
{
    int tc = 1;
    SCD(tc);
    
    while(tc--){
        
        int n;
        cin >> n;
        string b;
        cin >> b;
        string a = "1";
        for(int i=1;i<n;i++) {
            if (b[i]-'0'+1 != b[i-1]-'0'+a[i-1]-'0') {
                a += "1";
            } else {
                a += "0";
            }
        }        
        
        cout << a << endl;
        
    }
    return 0;
}

