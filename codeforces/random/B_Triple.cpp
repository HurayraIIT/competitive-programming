// Abu Hurayra (HurayraIIT)
// IIT, Jahangirnagar University

#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pair<int, int> > vpii;

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
#define rep(i,n) for(int i = 0 ; i < n ; i++)
#define rep2(i,a,b) for(int i = a ; i <= b ; i++)
 
 
int main()
{
  // fast_io
  
  int t;
  cin >> t;
  while(t--) {
    int a, n;
    cin >> n;
    vector<int> v;
    for (int i=0;i<n;i++) {
      cin >> a;
      v.push_back(a);
    }
    sort(v.begin(), v.end());
    int flg = 0, sol = -1;
    for (int i=0;i<=n-3;i++) {
      if (v[i] == v[i+1] && v[i] == v[i+2]) {
        flg = 1;
        sol = v[i];
      }
      if(flg) break;
    }
    cout << sol << endl;
  }
  
    
  return 0;
}


 
