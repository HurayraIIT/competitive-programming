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
typedef unsigned long long int uint64;
typedef vector<int> vi;

#define READ freopen("input.txt", "r", stdin);
#define WRITE freopen("output.txt", "w", stdout);
#define fast_io                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
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

    int n, i, j , k;

    //cin >> n;
    string s;
    cin >> s;
    n = sz(s);

    LL cnt = 0;

    for (i = 0; i < n - 2; i++)
    {
        if (s[i] == 'Q')
        {
            for (j = i + 1; j < n - 1; j++)
            {
                if (s[j] == 'A')
                {
                    for (k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'Q') cnt++;
                    }
                }
            }
        }
        ///cout << "TEST\n";
    }

    cout << cnt << endl;

    return 0;
}
