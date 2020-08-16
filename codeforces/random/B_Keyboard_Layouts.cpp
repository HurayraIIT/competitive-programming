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
    
    string a,b,c;
    cin >> a >> b >> c ;
    for(int i=0;i<(int)c.size();i++)
    {
        if(c[i]>='a' && c[i]<='z')
        {
            for(int j=0;j<26;j++)
            {
                if(a[j]==c[i])
                {
                    cout << b[j];
                    break;
                }
            }
        }
        else if(c[i]>='A' && c[i]<='Z')
        {
            for(int j=0;j<26;j++)
            {
                if(a[j]==c[i]-'A'+'a')
                {
                    cout << char(b[j]-'a'+'A');
                    break;
                }
            }
        }
        else cout << c[i];
    }
    
    
    return 0;
}


 